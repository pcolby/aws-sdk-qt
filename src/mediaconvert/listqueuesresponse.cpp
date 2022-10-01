// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listqueuesresponse.h"
#include "listqueuesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::ListQueuesResponse
 * \brief The ListQueuesResponse class provides an interace for MediaConvert ListQueues responses.
 *
 * \inmodule QtAwsMediaConvert
 *
 *
 * \sa MediaConvertClient::listQueues
 */

/*!
 * Constructs a ListQueuesResponse object for \a reply to \a request, with parent \a parent.
 */
ListQueuesResponse::ListQueuesResponse(
        const ListQueuesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new ListQueuesResponsePrivate(this), parent)
{
    setRequest(new ListQueuesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListQueuesRequest * ListQueuesResponse::request() const
{
    Q_D(const ListQueuesResponse);
    return static_cast<const ListQueuesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaConvert ListQueues \a response.
 */
void ListQueuesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListQueuesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaConvert::ListQueuesResponsePrivate
 * \brief The ListQueuesResponsePrivate class provides private implementation for ListQueuesResponse.
 * \internal
 *
 * \inmodule QtAwsMediaConvert
 */

/*!
 * Constructs a ListQueuesResponsePrivate object with public implementation \a q.
 */
ListQueuesResponsePrivate::ListQueuesResponsePrivate(
    ListQueuesResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * Parses a MediaConvert ListQueues response element from \a xml.
 */
void ListQueuesResponsePrivate::parseListQueuesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListQueuesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaConvert
} // namespace QtAws
