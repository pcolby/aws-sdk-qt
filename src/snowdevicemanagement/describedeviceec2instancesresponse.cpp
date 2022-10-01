// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedeviceec2instancesresponse.h"
#include "describedeviceec2instancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::DescribeDeviceEc2InstancesResponse
 * \brief The DescribeDeviceEc2InstancesResponse class provides an interace for SnowDeviceManagement DescribeDeviceEc2Instances responses.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::describeDeviceEc2Instances
 */

/*!
 * Constructs a DescribeDeviceEc2InstancesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDeviceEc2InstancesResponse::DescribeDeviceEc2InstancesResponse(
        const DescribeDeviceEc2InstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowDeviceManagementResponse(new DescribeDeviceEc2InstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeDeviceEc2InstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDeviceEc2InstancesRequest * DescribeDeviceEc2InstancesResponse::request() const
{
    Q_D(const DescribeDeviceEc2InstancesResponse);
    return static_cast<const DescribeDeviceEc2InstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SnowDeviceManagement DescribeDeviceEc2Instances \a response.
 */
void DescribeDeviceEc2InstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDeviceEc2InstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SnowDeviceManagement::DescribeDeviceEc2InstancesResponsePrivate
 * \brief The DescribeDeviceEc2InstancesResponsePrivate class provides private implementation for DescribeDeviceEc2InstancesResponse.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a DescribeDeviceEc2InstancesResponsePrivate object with public implementation \a q.
 */
DescribeDeviceEc2InstancesResponsePrivate::DescribeDeviceEc2InstancesResponsePrivate(
    DescribeDeviceEc2InstancesResponse * const q) : SnowDeviceManagementResponsePrivate(q)
{

}

/*!
 * Parses a SnowDeviceManagement DescribeDeviceEc2Instances response element from \a xml.
 */
void DescribeDeviceEc2InstancesResponsePrivate::parseDescribeDeviceEc2InstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDeviceEc2InstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SnowDeviceManagement
} // namespace QtAws
