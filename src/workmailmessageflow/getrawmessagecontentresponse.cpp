// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const GetRawMessageContentResponse);
    return static_cast<const GetRawMessageContentRequest *>(d->request);
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
