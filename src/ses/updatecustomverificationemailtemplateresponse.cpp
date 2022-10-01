// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecustomverificationemailtemplateresponse.h"
#include "updatecustomverificationemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::UpdateCustomVerificationEmailTemplateResponse
 * \brief The UpdateCustomVerificationEmailTemplateResponse class provides an interace for Ses UpdateCustomVerificationEmailTemplate responses.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::updateCustomVerificationEmailTemplate
 */

/*!
 * Constructs a UpdateCustomVerificationEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateCustomVerificationEmailTemplateResponse::UpdateCustomVerificationEmailTemplateResponse(
        const UpdateCustomVerificationEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new UpdateCustomVerificationEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateCustomVerificationEmailTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateCustomVerificationEmailTemplateRequest * UpdateCustomVerificationEmailTemplateResponse::request() const
{
    Q_D(const UpdateCustomVerificationEmailTemplateResponse);
    return static_cast<const UpdateCustomVerificationEmailTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses UpdateCustomVerificationEmailTemplate \a response.
 */
void UpdateCustomVerificationEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateCustomVerificationEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::UpdateCustomVerificationEmailTemplateResponsePrivate
 * \brief The UpdateCustomVerificationEmailTemplateResponsePrivate class provides private implementation for UpdateCustomVerificationEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a UpdateCustomVerificationEmailTemplateResponsePrivate object with public implementation \a q.
 */
UpdateCustomVerificationEmailTemplateResponsePrivate::UpdateCustomVerificationEmailTemplateResponsePrivate(
    UpdateCustomVerificationEmailTemplateResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses UpdateCustomVerificationEmailTemplate response element from \a xml.
 */
void UpdateCustomVerificationEmailTemplateResponsePrivate::parseUpdateCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCustomVerificationEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
