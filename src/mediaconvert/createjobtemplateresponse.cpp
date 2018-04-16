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

#include "createjobtemplateresponse.h"
#include "createjobtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaConvert {

/*!
 * \class QtAws::MediaConvert::CreateJobTemplateResponse
 *
 * \brief The CreateJobTemplateResponse class provides an interace for MediaConvert CreateJobTemplate responses.
 *
 * \ingroup MediaConvert
 *
 *
 * \sa MediaConvertClient::createJobTemplate
 */

/*!
 * @brief  Constructs a new CreateJobTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateJobTemplateResponse::CreateJobTemplateResponse(
        const CreateJobTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaConvertResponse(new CreateJobTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateJobTemplateRequest(request));
    setReply(reply);
}

const CreateJobTemplateRequest * CreateJobTemplateResponse::request() const
{
    Q_D(const CreateJobTemplateResponse);
    return static_cast<const CreateJobTemplateRequest *>(d->request);
}

/*!
 * @brief  Parse a MediaConvert CreateJobTemplate response.
 *
 * @param  response  Response to parse.
 */
void CreateJobTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateJobTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateJobTemplateResponsePrivate
 *
 * \brief Private implementation for CreateJobTemplateResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateJobTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateJobTemplateResponse instance.
 */
CreateJobTemplateResponsePrivate::CreateJobTemplateResponsePrivate(
    CreateJobTemplateResponse * const q) : MediaConvertResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MediaConvert CreateJobTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateJobTemplateResponsePrivate::parseCreateJobTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateJobTemplateResponse"));
    /// @todo
}

} // namespace MediaConvert
} // namespace QtAws
