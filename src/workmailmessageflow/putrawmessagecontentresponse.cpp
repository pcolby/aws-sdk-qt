// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
