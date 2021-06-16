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

#include "describeharvestjobresponse.h"
#include "describeharvestjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/*!
 * \class QtAws::MediaPackage::DescribeHarvestJobResponse
 * \brief The DescribeHarvestJobResponse class provides an interace for MediaPackage DescribeHarvestJob responses.
 *
 * \inmodule QtAwsMediaPackage
 *
 *
 * \sa MediaPackageClient::describeHarvestJob
 */

/*!
 * Constructs a DescribeHarvestJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeHarvestJobResponse::DescribeHarvestJobResponse(
        const DescribeHarvestJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaPackageResponse(new DescribeHarvestJobResponsePrivate(this), parent)
{
    setRequest(new DescribeHarvestJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeHarvestJobRequest * DescribeHarvestJobResponse::request() const
{
    Q_D(const DescribeHarvestJobResponse);
    return static_cast<const DescribeHarvestJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaPackage DescribeHarvestJob \a response.
 */
void DescribeHarvestJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeHarvestJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaPackage::DescribeHarvestJobResponsePrivate
 * \brief The DescribeHarvestJobResponsePrivate class provides private implementation for DescribeHarvestJobResponse.
 * \internal
 *
 * \inmodule QtAwsMediaPackage
 */

/*!
 * Constructs a DescribeHarvestJobResponsePrivate object with public implementation \a q.
 */
DescribeHarvestJobResponsePrivate::DescribeHarvestJobResponsePrivate(
    DescribeHarvestJobResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/*!
 * Parses a MediaPackage DescribeHarvestJob response element from \a xml.
 */
void DescribeHarvestJobResponsePrivate::parseDescribeHarvestJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHarvestJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaPackage
} // namespace QtAws
