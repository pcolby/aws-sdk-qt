/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describeworkspaceresponse.h"
#include "describeworkspaceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PrometheusService {

/*!
 * \class QtAws::PrometheusService::DescribeWorkspaceResponse
 * \brief The DescribeWorkspaceResponse class provides an interace for PrometheusService DescribeWorkspace responses.
 *
 * \inmodule QtAwsPrometheusService
 *
 *  Amazon Managed Service for
 *
 * \sa PrometheusServiceClient::describeWorkspace
 */

/*!
 * Constructs a DescribeWorkspaceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeWorkspaceResponse::DescribeWorkspaceResponse(
        const DescribeWorkspaceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PrometheusServiceResponse(new DescribeWorkspaceResponsePrivate(this), parent)
{
    setRequest(new DescribeWorkspaceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeWorkspaceRequest * DescribeWorkspaceResponse::request() const
{
    Q_D(const DescribeWorkspaceResponse);
    return static_cast<const DescribeWorkspaceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PrometheusService DescribeWorkspace \a response.
 */
void DescribeWorkspaceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeWorkspaceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PrometheusService::DescribeWorkspaceResponsePrivate
 * \brief The DescribeWorkspaceResponsePrivate class provides private implementation for DescribeWorkspaceResponse.
 * \internal
 *
 * \inmodule QtAwsPrometheusService
 */

/*!
 * Constructs a DescribeWorkspaceResponsePrivate object with public implementation \a q.
 */
DescribeWorkspaceResponsePrivate::DescribeWorkspaceResponsePrivate(
    DescribeWorkspaceResponse * const q) : PrometheusServiceResponsePrivate(q)
{

}

/*!
 * Parses a PrometheusService DescribeWorkspace response element from \a xml.
 */
void DescribeWorkspaceResponsePrivate::parseDescribeWorkspaceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeWorkspaceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PrometheusService
} // namespace QtAws
