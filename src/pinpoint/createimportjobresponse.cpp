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

#include "createimportjobresponse.h"
#include "createimportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateImportJobResponse
 *
 * \brief The CreateImportJobResponse class encapsulates Pinpoint CreateImportJob responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::createImportJob
 */

/*!
 * @brief  Constructs a new CreateImportJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateImportJobResponse::CreateImportJobResponse(
        const CreateImportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateImportJobResponsePrivate(this), parent)
{
    setRequest(new CreateImportJobRequest(request));
    setReply(reply);
}

const CreateImportJobRequest * CreateImportJobResponse::request() const
{
    Q_D(const CreateImportJobResponse);
    return static_cast<const CreateImportJobRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint CreateImportJob response.
 *
 * @param  response  Response to parse.
 */
void CreateImportJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateImportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateImportJobResponsePrivate
 *
 * \brief Private implementation for CreateImportJobResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateImportJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateImportJobResponse instance.
 */
CreateImportJobResponsePrivate::CreateImportJobResponsePrivate(
    CreateImportJobResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint CreateImportJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateImportJobResponsePrivate::parseCreateImportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateImportJobResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
