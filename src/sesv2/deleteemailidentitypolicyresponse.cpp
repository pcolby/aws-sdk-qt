// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteemailidentitypolicyresponse.h"
#include "deleteemailidentitypolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::DeleteEmailIdentityPolicyResponse
 * \brief The DeleteEmailIdentityPolicyResponse class provides an interace for SESv2 DeleteEmailIdentityPolicy responses.
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
 * \sa SESv2Client::deleteEmailIdentityPolicy
 */

/*!
 * Constructs a DeleteEmailIdentityPolicyResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteEmailIdentityPolicyResponse::DeleteEmailIdentityPolicyResponse(
        const DeleteEmailIdentityPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new DeleteEmailIdentityPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteEmailIdentityPolicyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteEmailIdentityPolicyRequest * DeleteEmailIdentityPolicyResponse::request() const
{
    Q_D(const DeleteEmailIdentityPolicyResponse);
    return static_cast<const DeleteEmailIdentityPolicyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 DeleteEmailIdentityPolicy \a response.
 */
void DeleteEmailIdentityPolicyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteEmailIdentityPolicyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::DeleteEmailIdentityPolicyResponsePrivate
 * \brief The DeleteEmailIdentityPolicyResponsePrivate class provides private implementation for DeleteEmailIdentityPolicyResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a DeleteEmailIdentityPolicyResponsePrivate object with public implementation \a q.
 */
DeleteEmailIdentityPolicyResponsePrivate::DeleteEmailIdentityPolicyResponsePrivate(
    DeleteEmailIdentityPolicyResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 DeleteEmailIdentityPolicy response element from \a xml.
 */
void DeleteEmailIdentityPolicyResponsePrivate::parseDeleteEmailIdentityPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEmailIdentityPolicyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
