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

#include "describestudioresponse.h"
#include "describestudioresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EMR {

/*!
 * \class QtAws::EMR::DescribeStudioResponse
 * \brief The DescribeStudioResponse class provides an interace for EMR DescribeStudio responses.
 *
 * \inmodule QtAwsEMR
 *
 *  Amazon EMR is a web service that makes it easier to process large amounts of data efficiently. Amazon EMR uses Hadoop
 *  processing combined with several AWS services to do tasks such as web indexing, data mining, log file analysis, machine
 *  learning, scientific simulation, and data warehouse
 *
 * \sa EmrClient::describeStudio
 */

/*!
 * Constructs a DescribeStudioResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStudioResponse::DescribeStudioResponse(
        const DescribeStudioRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EmrResponse(new DescribeStudioResponsePrivate(this), parent)
{
    setRequest(new DescribeStudioRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeStudioRequest * DescribeStudioResponse::request() const
{
    Q_D(const DescribeStudioResponse);
    return static_cast<const DescribeStudioRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EMR DescribeStudio \a response.
 */
void DescribeStudioResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeStudioResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EMR::DescribeStudioResponsePrivate
 * \brief The DescribeStudioResponsePrivate class provides private implementation for DescribeStudioResponse.
 * \internal
 *
 * \inmodule QtAwsEMR
 */

/*!
 * Constructs a DescribeStudioResponsePrivate object with public implementation \a q.
 */
DescribeStudioResponsePrivate::DescribeStudioResponsePrivate(
    DescribeStudioResponse * const q) : EmrResponsePrivate(q)
{

}

/*!
 * Parses a EMR DescribeStudio response element from \a xml.
 */
void DescribeStudioResponsePrivate::parseDescribeStudioResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStudioResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EMR
} // namespace QtAws
