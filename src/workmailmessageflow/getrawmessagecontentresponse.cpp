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

#include "getrawmessagecontentresponse.h"
#include "getrawmessagecontentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkMailMessageFlow {

/*!
 * \class QtAws::WorkMailMessageFlow::GetRawMessageContentResponse
 * \brief The GetRawMessageContentResponse class provides an interace for WorkMailMessageFlow GetRawMessageContent responses.
 *
 * \inmodule QtAwsWorkMailMessageFlow
 *
 *  The WorkMail Message Flow API provides access to email messages as they are being sent and received by a WorkMail
 *
 * \sa WorkMailMessageFlowClient::getRawMessageContent
 */

/*!
 * Constructs a GetRawMessageContentResponse object for \a reply to \a request, with parent \a parent.
 */
GetRawMessageContentResponse::GetRawMessageContentResponse(
        const GetRawMessageContentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkMailMessageFlowResponse(new GetRawMessageContentResponsePrivate(this), parent)
{
    setRequest(new GetRawMessageContentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRawMessageContentRequest * GetRawMessageContentResponse::request() const
{
    return static_cast<const GetRawMessageContentRequest *>(WorkMailMessageFlowResponse::request());
}

/*!
 * \reimp
 * Parses a successful WorkMailMessageFlow GetRawMessageContent \a response.
 */
void GetRawMessageContentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRawMessageContentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkMailMessageFlow::GetRawMessageContentResponsePrivate
 * \brief The GetRawMessageContentResponsePrivate class provides private implementation for GetRawMessageContentResponse.
 * \internal
 *
 * \inmodule QtAwsWorkMailMessageFlow
 */

/*!
 * Constructs a GetRawMessageContentResponsePrivate object with public implementation \a q.
 */
GetRawMessageContentResponsePrivate::GetRawMessageContentResponsePrivate(
    GetRawMessageContentResponse * const q) : WorkMailMessageFlowResponsePrivate(q)
{

}

/*!
 * Parses a WorkMailMessageFlow GetRawMessageContent response element from \a xml.
 */
void GetRawMessageContentResponsePrivate::parseGetRawMessageContentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRawMessageContentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkMailMessageFlow
} // namespace QtAws
