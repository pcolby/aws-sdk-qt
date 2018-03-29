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

#include "createclassifierresponse.h"
#include "createclassifierresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  CreateClassifierResponse
 *
 * @brief  Handles Glue CreateClassifier responses.
 *
 * @see    GlueClient::createClassifier
 */

/**
 * @brief  Constructs a new CreateClassifierResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateClassifierResponse::CreateClassifierResponse(
        const CreateClassifierRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateClassifierResponsePrivate(this), parent)
{
    setRequest(new CreateClassifierRequest(request));
    setReply(reply);
}

const CreateClassifierRequest * CreateClassifierResponse::request() const
{
    Q_D(const CreateClassifierResponse);
    return static_cast<const CreateClassifierRequest *>(d->request);
}

/**
 * @brief  Parse a Glue CreateClassifier response.
 *
 * @param  response  Response to parse.
 */
void CreateClassifierResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateClassifierResponsePrivate
 *
 * @brief  Private implementation for CreateClassifierResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateClassifierResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateClassifierResponse instance.
 */
CreateClassifierResponsePrivate::CreateClassifierResponsePrivate(
    CreateClassifierResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue CreateClassifierResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateClassifierResponsePrivate::CreateClassifierResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateClassifierResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
