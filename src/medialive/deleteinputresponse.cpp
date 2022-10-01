// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinputresponse.h"
#include "deleteinputresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteInputResponse
 * \brief The DeleteInputResponse class provides an interace for MediaLive DeleteInput responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteInput
 */

/*!
 * Constructs a DeleteInputResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteInputResponse::DeleteInputResponse(
        const DeleteInputRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new DeleteInputResponsePrivate(this), parent)
{
    setRequest(new DeleteInputRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteInputRequest * DeleteInputResponse::request() const
{
    Q_D(const DeleteInputResponse);
    return static_cast<const DeleteInputRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive DeleteInput \a response.
 */
void DeleteInputResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteInputResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::DeleteInputResponsePrivate
 * \brief The DeleteInputResponsePrivate class provides private implementation for DeleteInputResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteInputResponsePrivate object with public implementation \a q.
 */
DeleteInputResponsePrivate::DeleteInputResponsePrivate(
    DeleteInputResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive DeleteInput response element from \a xml.
 */
void DeleteInputResponsePrivate::parseDeleteInputResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteInputResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
