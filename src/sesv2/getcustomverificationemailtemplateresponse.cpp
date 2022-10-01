// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcustomverificationemailtemplateresponse.h"
#include "getcustomverificationemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetCustomVerificationEmailTemplateResponse
 * \brief The GetCustomVerificationEmailTemplateResponse class provides an interace for SESv2 GetCustomVerificationEmailTemplate responses.
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
 * \sa SESv2Client::getCustomVerificationEmailTemplate
 */

/*!
 * Constructs a GetCustomVerificationEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetCustomVerificationEmailTemplateResponse::GetCustomVerificationEmailTemplateResponse(
        const GetCustomVerificationEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new GetCustomVerificationEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new GetCustomVerificationEmailTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCustomVerificationEmailTemplateRequest * GetCustomVerificationEmailTemplateResponse::request() const
{
    Q_D(const GetCustomVerificationEmailTemplateResponse);
    return static_cast<const GetCustomVerificationEmailTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 GetCustomVerificationEmailTemplate \a response.
 */
void GetCustomVerificationEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCustomVerificationEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::GetCustomVerificationEmailTemplateResponsePrivate
 * \brief The GetCustomVerificationEmailTemplateResponsePrivate class provides private implementation for GetCustomVerificationEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetCustomVerificationEmailTemplateResponsePrivate object with public implementation \a q.
 */
GetCustomVerificationEmailTemplateResponsePrivate::GetCustomVerificationEmailTemplateResponsePrivate(
    GetCustomVerificationEmailTemplateResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 GetCustomVerificationEmailTemplate response element from \a xml.
 */
void GetCustomVerificationEmailTemplateResponsePrivate::parseGetCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCustomVerificationEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
