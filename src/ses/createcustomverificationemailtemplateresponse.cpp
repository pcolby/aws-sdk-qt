// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcustomverificationemailtemplateresponse.h"
#include "createcustomverificationemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::CreateCustomVerificationEmailTemplateResponse
 * \brief The CreateCustomVerificationEmailTemplateResponse class provides an interace for Ses CreateCustomVerificationEmailTemplate responses.
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
 * \sa SesClient::createCustomVerificationEmailTemplate
 */

/*!
 * Constructs a CreateCustomVerificationEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCustomVerificationEmailTemplateResponse::CreateCustomVerificationEmailTemplateResponse(
        const CreateCustomVerificationEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SesResponse(new CreateCustomVerificationEmailTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateCustomVerificationEmailTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCustomVerificationEmailTemplateRequest * CreateCustomVerificationEmailTemplateResponse::request() const
{
    Q_D(const CreateCustomVerificationEmailTemplateResponse);
    return static_cast<const CreateCustomVerificationEmailTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ses CreateCustomVerificationEmailTemplate \a response.
 */
void CreateCustomVerificationEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCustomVerificationEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ses::CreateCustomVerificationEmailTemplateResponsePrivate
 * \brief The CreateCustomVerificationEmailTemplateResponsePrivate class provides private implementation for CreateCustomVerificationEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a CreateCustomVerificationEmailTemplateResponsePrivate object with public implementation \a q.
 */
CreateCustomVerificationEmailTemplateResponsePrivate::CreateCustomVerificationEmailTemplateResponsePrivate(
    CreateCustomVerificationEmailTemplateResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a Ses CreateCustomVerificationEmailTemplate response element from \a xml.
 */
void CreateCustomVerificationEmailTemplateResponsePrivate::parseCreateCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCustomVerificationEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ses
} // namespace QtAws
