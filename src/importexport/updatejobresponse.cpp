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

#include "updatejobresponse.h"
#include "updatejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ImportExport {

/*!
 * \class QtAws::ImportExport::UpdateJobResponse
 *
 * \brief The UpdateJobResponse class provides an interace for ImportExport UpdateJob responses.
 *
 * \ingroup ImportExport
 *
 *  <fullname>AWS Import/Export Service</fullname> AWS Import/Export accelerates transferring large amounts of data between
 *  the AWS cloud and portable storage devices that you mail to us. AWS Import/Export transfers data directly onto and off
 *  of your storage devices using Amazon's high-speed internal network and bypassing the Internet. For large data sets, AWS
 *
 * \sa ImportExportClient::updateJob
 */

/*!
 * @brief  Constructs a new UpdateJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateJobResponse::UpdateJobResponse(
        const UpdateJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ImportExportResponse(new UpdateJobResponsePrivate(this), parent)
{
    setRequest(new UpdateJobRequest(request));
    setReply(reply);
}

const UpdateJobRequest * UpdateJobResponse::request() const
{
    Q_D(const UpdateJobResponse);
    return static_cast<const UpdateJobRequest *>(d->request);
}

/*!
 * @brief  Parse a ImportExport UpdateJob response.
 *
 * @param  response  Response to parse.
 */
void UpdateJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateJobResponsePrivate
 *
 * \brief Private implementation for UpdateJobResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateJobResponse instance.
 */
UpdateJobResponsePrivate::UpdateJobResponsePrivate(
    UpdateJobResponse * const q) : ImportExportResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ImportExport UpdateJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateJobResponsePrivate::parseUpdateJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateJobResponse"));
    /// @todo
}

} // namespace ImportExport
} // namespace QtAws
