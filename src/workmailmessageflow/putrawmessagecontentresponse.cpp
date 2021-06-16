/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putrawmessagecontentresponse.h"
#include "putrawmessagecontentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMailMessageFlow {

/*!
 * \class QtAws::WorkMailMessageFlow::PutRawMessageContentResponse
 * \brief The PutRawMessageContentResponse class provides an interace for WorkMailMessageFlow PutRawMessageContent responses.
 *
 * \inmodule QtAwsWorkMailMessageFlow
 *
 *  The WorkMail Message Flow API provides access to email messages as they are being sent and received by a WorkMail
 *
 * \sa WorkMailMessageFlowClient::putRawMessageContent
 */

/*!
 * Constructs a PutRawMessageContentResponse object for \a reply to \a request, with parent \a parent.
 */
PutRawMessageContentResponse::PutRawMessageContentResponse(
        const PutRawMessageContentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailMessageFlowResponse(new PutRawMessageContentResponsePrivate(this), parent)
{
    setRequest(new PutRawMessageContentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutRawMessageContentRequest * PutRawMessageContentResponse::request() const
{
    Q_D(const PutRawMessageContentResponse);
    return static_cast<const PutRawMessageContentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkMailMessageFlow PutRawMessageContent \a response.
 */
void PutRawMessageContentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRawMessageContentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkMailMessageFlow::PutRawMessageContentResponsePrivate
 * \brief The PutRawMessageContentResponsePrivate class provides private implementation for PutRawMessageContentResponse.
 * \internal
 *
 * \inmodule QtAwsWorkMailMessageFlow
 */

/*!
 * Constructs a PutRawMessageContentResponsePrivate object with public implementation \a q.
 */
PutRawMessageContentResponsePrivate::PutRawMessageContentResponsePrivate(
    PutRawMessageContentResponse * const q) : WorkMailMessageFlowResponsePrivate(q)
{

}

/*!
 * Parses a WorkMailMessageFlow PutRawMessageContent response element from \a xml.
 */
void PutRawMessageContentResponsePrivate::parsePutRawMessageContentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRawMessageContentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkMailMessageFlow
} // namespace QtAws
