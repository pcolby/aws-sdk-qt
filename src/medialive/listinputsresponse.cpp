// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinputsresponse.h"
#include "listinputsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListInputsResponse
 * \brief The ListInputsResponse class provides an interace for MediaLive ListInputs responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listInputs
 */

/*!
 * Constructs a ListInputsResponse object for \a reply to \a request, with parent \a parent.
 */
ListInputsResponse::ListInputsResponse(
        const ListInputsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ListInputsResponsePrivate(this), parent)
{
    setRequest(new ListInputsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListInputsRequest * ListInputsResponse::request() const
{
    Q_D(const ListInputsResponse);
    return static_cast<const ListInputsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive ListInputs \a response.
 */
void ListInputsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListInputsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::ListInputsResponsePrivate
 * \brief The ListInputsResponsePrivate class provides private implementation for ListInputsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListInputsResponsePrivate object with public implementation \a q.
 */
ListInputsResponsePrivate::ListInputsResponsePrivate(
    ListInputsResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive ListInputs response element from \a xml.
 */
void ListInputsResponsePrivate::parseListInputsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListInputsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
