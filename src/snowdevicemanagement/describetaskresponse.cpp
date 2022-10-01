// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetaskresponse.h"
#include "describetaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::DescribeTaskResponse
 * \brief The DescribeTaskResponse class provides an interace for SnowDeviceManagement DescribeTask responses.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::describeTask
 */

/*!
 * Constructs a DescribeTaskResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTaskResponse::DescribeTaskResponse(
        const DescribeTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowDeviceManagementResponse(new DescribeTaskResponsePrivate(this), parent)
{
    setRequest(new DescribeTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTaskRequest * DescribeTaskResponse::request() const
{
    Q_D(const DescribeTaskResponse);
    return static_cast<const DescribeTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SnowDeviceManagement DescribeTask \a response.
 */
void DescribeTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SnowDeviceManagement::DescribeTaskResponsePrivate
 * \brief The DescribeTaskResponsePrivate class provides private implementation for DescribeTaskResponse.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a DescribeTaskResponsePrivate object with public implementation \a q.
 */
DescribeTaskResponsePrivate::DescribeTaskResponsePrivate(
    DescribeTaskResponse * const q) : SnowDeviceManagementResponsePrivate(q)
{

}

/*!
 * Parses a SnowDeviceManagement DescribeTask response element from \a xml.
 */
void DescribeTaskResponsePrivate::parseDescribeTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SnowDeviceManagement
} // namespace QtAws
