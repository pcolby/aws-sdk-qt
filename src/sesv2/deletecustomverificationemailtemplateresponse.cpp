// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecustomverificationemailtemplateresponse.h"
#include "deletecustomverificationemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::DeleteCustomVerificationEmailTemplateResponse
 * \brief The DeleteCustomVerificationEmailTemplateResponse class provides an interace for SESv2 DeleteCustomVerificationEmailTemplate responses.
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
 * \sa SESv2Client::deleteCustomVerificationEmailTemplate
 */

/*!
 * Constructs a DeleteCustomVerificationEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCustomVerificationEmailTemplateResponse::DeleteCustomVerificationEmailTemplateResponse(
        const DeleteCustomVerificationEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new DeleteCustomVerificationEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteCustomVerificationEmailTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCustomVerificationEmailTemplateRequest * DeleteCustomVerificationEmailTemplateResponse::request() const
{
    Q_D(const DeleteCustomVerificationEmailTemplateResponse);
    return static_cast<const DeleteCustomVerificationEmailTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 DeleteCustomVerificationEmailTemplate \a response.
 */
void DeleteCustomVerificationEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCustomVerificationEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::DeleteCustomVerificationEmailTemplateResponsePrivate
 * \brief The DeleteCustomVerificationEmailTemplateResponsePrivate class provides private implementation for DeleteCustomVerificationEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a DeleteCustomVerificationEmailTemplateResponsePrivate object with public implementation \a q.
 */
DeleteCustomVerificationEmailTemplateResponsePrivate::DeleteCustomVerificationEmailTemplateResponsePrivate(
    DeleteCustomVerificationEmailTemplateResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 DeleteCustomVerificationEmailTemplate response element from \a xml.
 */
void DeleteCustomVerificationEmailTemplateResponsePrivate::parseDeleteCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCustomVerificationEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
