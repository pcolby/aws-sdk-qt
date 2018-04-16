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

#include "createscriptresponse.h"
#include "createscriptresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateScriptResponse
 *
 * \brief The CreateScriptResponse class encapsulates Glue CreateScript responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createScript
 */

/*!
 * @brief  Constructs a new CreateScriptResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateScriptResponse::CreateScriptResponse(
        const CreateScriptRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new CreateScriptResponsePrivate(this), parent)
{
    setRequest(new CreateScriptRequest(request));
    setReply(reply);
}

const CreateScriptRequest * CreateScriptResponse::request() const
{
    Q_D(const CreateScriptResponse);
    return static_cast<const CreateScriptRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue CreateScript response.
 *
 * @param  response  Response to parse.
 */
void CreateScriptResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateScriptResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateScriptResponsePrivate
 *
 * \brief Private implementation for CreateScriptResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateScriptResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateScriptResponse instance.
 */
CreateScriptResponsePrivate::CreateScriptResponsePrivate(
    CreateScriptResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue CreateScriptResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateScriptResponsePrivate::parseCreateScriptResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateScriptResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
