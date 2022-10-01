// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetagsresponse.h"
#include "deletetagsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::DeleteTagsResponse
 * \brief The DeleteTagsResponse class provides an interace for Mq DeleteTags responses.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::deleteTags
 */

/*!
 * Constructs a DeleteTagsResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTagsResponse::DeleteTagsResponse(
        const DeleteTagsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MqResponse(new DeleteTagsResponsePrivate(this), parent)
{
    setRequest(new DeleteTagsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTagsRequest * DeleteTagsResponse::request() const
{
    Q_D(const DeleteTagsResponse);
    return static_cast<const DeleteTagsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mq DeleteTags \a response.
 */
void DeleteTagsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTagsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mq::DeleteTagsResponsePrivate
 * \brief The DeleteTagsResponsePrivate class provides private implementation for DeleteTagsResponse.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a DeleteTagsResponsePrivate object with public implementation \a q.
 */
DeleteTagsResponsePrivate::DeleteTagsResponsePrivate(
    DeleteTagsResponse * const q) : MqResponsePrivate(q)
{

}

/*!
 * Parses a Mq DeleteTags response element from \a xml.
 */
void DeleteTagsResponsePrivate::parseDeleteTagsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTagsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mq
} // namespace QtAws
