/*
    Copyright 2013-2018 Paul Colby

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
namespace SES {

/*!
 * \class QtAws::SES::CreateCustomVerificationEmailTemplateResponse
 * \brief The CreateCustomVerificationEmailTemplateResponse class provides an interace for SES CreateCustomVerificationEmailTemplate responses.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
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
 * Parses a successful SES CreateCustomVerificationEmailTemplate \a response.
 */
void CreateCustomVerificationEmailTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateCustomVerificationEmailTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SES::CreateCustomVerificationEmailTemplateResponsePrivate
 * \brief The CreateCustomVerificationEmailTemplateResponsePrivate class provides private implementation for CreateCustomVerificationEmailTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a CreateCustomVerificationEmailTemplateResponsePrivate object with public implementation \a q.
 */
CreateCustomVerificationEmailTemplateResponsePrivate::CreateCustomVerificationEmailTemplateResponsePrivate(
    CreateCustomVerificationEmailTemplateResponse * const q) : SesResponsePrivate(q)
{

}

/*!
 * Parses a SES CreateCustomVerificationEmailTemplate response element from \a xml.
 */
void CreateCustomVerificationEmailTemplateResponsePrivate::parseCreateCustomVerificationEmailTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCustomVerificationEmailTemplateResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
