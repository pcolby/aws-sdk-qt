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

#include "createreplicationjobresponse.h"
#include "createreplicationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::CreateReplicationJobResponse
 *
 * \brief The CreateReplicationJobResponse class provides an interace for SMS CreateReplicationJob responses.
 *
 * \ingroup SMS
 *
 *
 * \sa SMSClient::createReplicationJob
 */

/*!
 * @brief  Constructs a new CreateReplicationJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateReplicationJobResponse::CreateReplicationJobResponse(
        const CreateReplicationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SMSResponse(new CreateReplicationJobResponsePrivate(this), parent)
{
    setRequest(new CreateReplicationJobRequest(request));
    setReply(reply);
}

const CreateReplicationJobRequest * CreateReplicationJobResponse::request() const
{
    Q_D(const CreateReplicationJobResponse);
    return static_cast<const CreateReplicationJobRequest *>(d->request);
}

/*!
 * @brief  Parse a SMS CreateReplicationJob response.
 *
 * @param  response  Response to parse.
 */
void CreateReplicationJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateReplicationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateReplicationJobResponsePrivate
 *
 * \brief Private implementation for CreateReplicationJobResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateReplicationJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateReplicationJobResponse instance.
 */
CreateReplicationJobResponsePrivate::CreateReplicationJobResponsePrivate(
    CreateReplicationJobResponse * const q) : SMSResponsePrivate(q)
{

}

/*!
 * @brief  Parse an SMS CreateReplicationJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateReplicationJobResponsePrivate::parseCreateReplicationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReplicationJobResponse"));
    /// @todo
}

} // namespace SMS
} // namespace QtAws
