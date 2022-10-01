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

#include "describedatarepositoryassociationsresponse.h"
#include "describedatarepositoryassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeDataRepositoryAssociationsResponse
 * \brief The DescribeDataRepositoryAssociationsResponse class provides an interace for FSx DescribeDataRepositoryAssociations responses.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeDataRepositoryAssociations
 */

/*!
 * Constructs a DescribeDataRepositoryAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDataRepositoryAssociationsResponse::DescribeDataRepositoryAssociationsResponse(
        const DescribeDataRepositoryAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FSxResponse(new DescribeDataRepositoryAssociationsResponsePrivate(this), parent)
{
    setRequest(new DescribeDataRepositoryAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDataRepositoryAssociationsRequest * DescribeDataRepositoryAssociationsResponse::request() const
{
    Q_D(const DescribeDataRepositoryAssociationsResponse);
    return static_cast<const DescribeDataRepositoryAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful FSx DescribeDataRepositoryAssociations \a response.
 */
void DescribeDataRepositoryAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDataRepositoryAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::FSx::DescribeDataRepositoryAssociationsResponsePrivate
 * \brief The DescribeDataRepositoryAssociationsResponsePrivate class provides private implementation for DescribeDataRepositoryAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeDataRepositoryAssociationsResponsePrivate object with public implementation \a q.
 */
DescribeDataRepositoryAssociationsResponsePrivate::DescribeDataRepositoryAssociationsResponsePrivate(
    DescribeDataRepositoryAssociationsResponse * const q) : FSxResponsePrivate(q)
{

}

/*!
 * Parses a FSx DescribeDataRepositoryAssociations response element from \a xml.
 */
void DescribeDataRepositoryAssociationsResponsePrivate::parseDescribeDataRepositoryAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDataRepositoryAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace FSx
} // namespace QtAws
