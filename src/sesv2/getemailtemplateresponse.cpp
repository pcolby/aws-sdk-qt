// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getemailtemplateresponse.h"
#include "getemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetEmailTemplateResponse
 * \brief The GetEmailTemplateResponse class provides an interace for SESv2 GetEmailTemplate responses.
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
 * \sa SESv2Client::getEmailTemplate
 */

/*!
 * Constructs a GetEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
GetEmailTemplateResponse::GetEmailTemplateResponse(
        const GetEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new GetEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new GetEmailTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEmailTemplateRequest * GetEmailTemplateResponse::request() const
{
    Q_D(const GetEmailTemplateResponse);
    return static_cast<const GetEmailTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 GetEmailTemplate \a response.
 */
void GetEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::GetEmailTemplateResponsePrivate
 * \brief The GetEmailTemplateResponsePrivate class provides private implementation for GetEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetEmailTemplateResponsePrivate object with public implementation \a q.
 */
GetEmailTemplateResponsePrivate::GetEmailTemplateResponsePrivate(
    GetEmailTemplateResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 GetEmailTemplate response element from \a xml.
 */
void GetEmailTemplateResponsePrivate::parseGetEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
