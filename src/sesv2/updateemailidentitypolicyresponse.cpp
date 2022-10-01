// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateemailidentitypolicyresponse.h"
#include "updateemailidentitypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::UpdateEmailIdentityPolicyResponse
 * \brief The UpdateEmailIdentityPolicyResponse class provides an interace for SESv2 UpdateEmailIdentityPolicy responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::updateEmailIdentityPolicy
 */

/*!
 * Constructs a UpdateEmailIdentityPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateEmailIdentityPolicyResponse::UpdateEmailIdentityPolicyResponse(
        const UpdateEmailIdentityPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new UpdateEmailIdentityPolicyResponsePrivate(this), parent)
{
    setRequest(new UpdateEmailIdentityPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateEmailIdentityPolicyRequest * UpdateEmailIdentityPolicyResponse::request() const
{
    Q_D(const UpdateEmailIdentityPolicyResponse);
    return static_cast<const UpdateEmailIdentityPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 UpdateEmailIdentityPolicy \a response.
 */
void UpdateEmailIdentityPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateEmailIdentityPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::UpdateEmailIdentityPolicyResponsePrivate
 * \brief The UpdateEmailIdentityPolicyResponsePrivate class provides private implementation for UpdateEmailIdentityPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a UpdateEmailIdentityPolicyResponsePrivate object with public implementation \a q.
 */
UpdateEmailIdentityPolicyResponsePrivate::UpdateEmailIdentityPolicyResponsePrivate(
    UpdateEmailIdentityPolicyResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 UpdateEmailIdentityPolicy response element from \a xml.
 */
void UpdateEmailIdentityPolicyResponsePrivate::parseUpdateEmailIdentityPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateEmailIdentityPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
