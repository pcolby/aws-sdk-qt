/*
    Copyright 2013-2020 Paul Colby

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

#include "describejobresponse.h"
#include "describejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DescribeJobResponse
 * \brief The DescribeJobResponse class provides an interace for S3Control DescribeJob responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane operations.
 *
 * \sa S3ControlClient::describeJob
 */

/*!
 * Constructs a DescribeJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeJobResponse::DescribeJobResponse(
        const DescribeJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DescribeJobResponsePrivate(this), parent)
{
    setRequest(new DescribeJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeJobRequest * DescribeJobResponse::request() const
{
    Q_D(const DescribeJobResponse);
    return static_cast<const DescribeJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DescribeJob \a response.
 */
void DescribeJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DescribeJobResponsePrivate
 * \brief The DescribeJobResponsePrivate class provides private implementation for DescribeJobResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DescribeJobResponsePrivate object with public implementation \a q.
 */
DescribeJobResponsePrivate::DescribeJobResponsePrivate(
    DescribeJobResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DescribeJob response element from \a xml.
 */
void DescribeJobResponsePrivate::parseDescribeJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
