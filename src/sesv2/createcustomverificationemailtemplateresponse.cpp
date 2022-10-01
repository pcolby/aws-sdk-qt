/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createcustomverificationemailtemplateresponse.h"
#include "createcustomverificationemailtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::CreateCustomVerificationEmailTemplateResponse
 * \brief The CreateCustomVerificationEmailTemplateResponse class provides an interace for SESv2 CreateCustomVerificationEmailTemplate responses.
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
 * \sa SESv2Client::createCustomVerificationEmailTemplate
 */

/*!
 * Constructs a CreateCustomVerificationEmailTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCustomVerificationEmailTemplateResponse::CreateCustomVerificationEmailTemplateResponse(
        const CreateCustomVerificationEmailTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new CreateCustomVerificationEmailTemplateResponsePrivate(this), parent)
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
 * Parses a successful SESv2 CreateCustomVerificationEmailTemplate \a response.
 */
void CreateCustomVerificationEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCustomVerificationEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::CreateCustomVerificationEmailTemplateResponsePrivate
 * \brief The CreateCustomVerificationEmailTemplateResponsePrivate class provides private implementation for CreateCustomVerificationEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a CreateCustomVerificationEmailTemplateResponsePrivate object with public implementation \a q.
 */
CreateCustomVerificationEmailTemplateResponsePrivate::CreateCustomVerificationEmailTemplateResponsePrivate(
    CreateCustomVerificationEmailTemplateResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 CreateCustomVerificationEmailTemplate response element from \a xml.
 */
void CreateCustomVerificationEmailTemplateResponsePrivate::parseCreateCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCustomVerificationEmailTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws
