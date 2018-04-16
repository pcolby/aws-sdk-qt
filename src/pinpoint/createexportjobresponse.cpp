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

#include "createexportjobresponse.h"
#include "createexportjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::CreateExportJobResponse
 *
 * \brief The CreateExportJobResponse class provides an interace for Pinpoint CreateExportJob responses.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::createExportJob
 */

/*!
 * @brief  Constructs a new CreateExportJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateExportJobResponse::CreateExportJobResponse(
        const CreateExportJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new CreateExportJobResponsePrivate(this), parent)
{
    setRequest(new CreateExportJobRequest(request));
    setReply(reply);
}

const CreateExportJobRequest * CreateExportJobResponse::request() const
{
    Q_D(const CreateExportJobResponse);
    return static_cast<const CreateExportJobRequest *>(d->request);
}

/*!
 * @brief  Parse a Pinpoint CreateExportJob response.
 *
 * @param  response  Response to parse.
 */
void CreateExportJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateExportJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateExportJobResponsePrivate
 *
 * \brief Private implementation for CreateExportJobResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateExportJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateExportJobResponse instance.
 */
CreateExportJobResponsePrivate::CreateExportJobResponsePrivate(
    CreateExportJobResponse * const q) : PinpointResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Pinpoint CreateExportJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateExportJobResponsePrivate::parseCreateExportJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateExportJobResponse"));
    /// @todo
}

} // namespace Pinpoint
} // namespace QtAws
