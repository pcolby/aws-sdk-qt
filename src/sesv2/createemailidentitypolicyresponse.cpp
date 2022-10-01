// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createemailidentitypolicyresponse.h"
#include "createemailidentitypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::CreateEmailIdentityPolicyResponse
 * \brief The CreateEmailIdentityPolicyResponse class provides an interace for SESv2 CreateEmailIdentityPolicy responses.
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
 * \sa SESv2Client::createEmailIdentityPolicy
 */

/*!
 * Constructs a CreateEmailIdentityPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateEmailIdentityPolicyResponse::CreateEmailIdentityPolicyResponse(
        const CreateEmailIdentityPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new CreateEmailIdentityPolicyResponsePrivate(this), parent)
{
    setRequest(new CreateEmailIdentityPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateEmailIdentityPolicyRequest * CreateEmailIdentityPolicyResponse::request() const
{
    Q_D(const CreateEmailIdentityPolicyResponse);
    return static_cast<const CreateEmailIdentityPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 CreateEmailIdentityPolicy \a response.
 */
void CreateEmailIdentityPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateEmailIdentityPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::CreateEmailIdentityPolicyResponsePrivate
 * \brief The CreateEmailIdentityPolicyResponsePrivate class provides private implementation for CreateEmailIdentityPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a CreateEmailIdentityPolicyResponsePrivate object with public implementation \a q.
 */
CreateEmailIdentityPolicyResponsePrivate::CreateEmailIdentityPolicyResponsePrivate(
    CreateEmailIdentityPolicyResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 CreateEmailIdentityPolicy response element from \a xml.
 */
void CreateEmailIdentityPolicyResponsePrivate::parseCreateEmailIdentityPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEmailIdentityPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
