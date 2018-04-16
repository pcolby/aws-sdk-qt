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

#include "describeapplicationstateresponse.h"
#include "describeapplicationstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::DescribeApplicationStateResponse
 *
 * \brief The DescribeApplicationStateResponse class encapsulates MigrationHub DescribeApplicationState responses.
 *
 * \ingroup MigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::describeApplicationState
 */

/*!
 * @brief  Constructs a new DescribeApplicationStateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeApplicationStateResponse::DescribeApplicationStateResponse(
        const DescribeApplicationStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new DescribeApplicationStateResponsePrivate(this), parent)
{
    setRequest(new DescribeApplicationStateRequest(request));
    setReply(reply);
}

const DescribeApplicationStateRequest * DescribeApplicationStateResponse::request() const
{
    Q_D(const DescribeApplicationStateResponse);
    return static_cast<const DescribeApplicationStateRequest *>(d->request);
}

/*!
 * @brief  Parse a MigrationHub DescribeApplicationState response.
 *
 * @param  response  Response to parse.
 */
void DescribeApplicationStateResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeApplicationStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeApplicationStateResponsePrivate
 *
 * \brief Private implementation for DescribeApplicationStateResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeApplicationStateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeApplicationStateResponse instance.
 */
DescribeApplicationStateResponsePrivate::DescribeApplicationStateResponsePrivate(
    DescribeApplicationStateResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MigrationHub DescribeApplicationStateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeApplicationStateResponsePrivate::parseDescribeApplicationStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeApplicationStateResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace QtAws
