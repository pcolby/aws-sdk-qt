/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createtemplateresponse.h"
#include "createtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::CreateTemplateResponse
 *
 * \brief The CreateTemplateResponse class provides an interace for SES CreateTemplate responses.
 *
 * \ingroup SES
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
 * \sa SESClient::createTemplate
 */

/*!
 * @brief  Constructs a new CreateTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTemplateResponse::CreateTemplateResponse(
        const CreateTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new CreateTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateTemplateRequest(request));
    setReply(reply);
}

const CreateTemplateRequest * CreateTemplateResponse::request() const
{
    Q_D(const CreateTemplateResponse);
    return static_cast<const CreateTemplateRequest *>(d->request);
}

/*!
 * @brief  Parse a SES CreateTemplate response.
 *
 * @param  response  Response to parse.
 */
void CreateTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateTemplateResponsePrivate
 *
 * \brief Private implementation for CreateTemplateResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTemplateResponse instance.
 */
CreateTemplateResponsePrivate::CreateTemplateResponsePrivate(
    CreateTemplateResponse * const q) : SESResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SES CreateTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTemplateResponsePrivate::parseCreateTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTemplateResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
