// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putresourcepolicyresponse.h"
#include "putresourcepolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::PutResourcePolicyResponse
 * \brief The PutResourcePolicyResponse class provides an interace for Comprehend PutResourcePolicy responses.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::putResourcePolicy
 */

/*!
 * Constructs a PutResourcePolicyResponse object for \a reply to \a request, with parent \a parent.
 */
PutResourcePolicyResponse::PutResourcePolicyResponse(
        const PutResourcePolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new PutResourcePolicyResponsePrivate(this), parent)
{
    setRequest(new PutResourcePolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutResourcePolicyRequest * PutResourcePolicyResponse::request() const
{
    Q_D(const PutResourcePolicyResponse);
    return static_cast<const PutResourcePolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Comprehend PutResourcePolicy \a response.
 */
void PutResourcePolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutResourcePolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Comprehend::PutResourcePolicyResponsePrivate
 * \brief The PutResourcePolicyResponsePrivate class provides private implementation for PutResourcePolicyResponse.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a PutResourcePolicyResponsePrivate object with public implementation \a q.
 */
PutResourcePolicyResponsePrivate::PutResourcePolicyResponsePrivate(
    PutResourcePolicyResponse * const q) : ComprehendResponsePrivate(q)
{

}

/*!
 * Parses a Comprehend PutResourcePolicy response element from \a xml.
 */
void PutResourcePolicyResponsePrivate::parsePutResourcePolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutResourcePolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Comprehend
} // namespace QtAws
