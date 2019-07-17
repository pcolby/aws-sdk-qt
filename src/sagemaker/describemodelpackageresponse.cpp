/*
    Copyright 2013-2019 Paul Colby

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

#include "describemodelpackageresponse.h"
#include "describemodelpackageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeModelPackageResponse
 * \brief The DescribeModelPackageResponse class provides an interace for SageMaker DescribeModelPackage responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::describeModelPackage
 */

/*!
 * Constructs a DescribeModelPackageResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeModelPackageResponse::DescribeModelPackageResponse(
        const DescribeModelPackageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeModelPackageResponsePrivate(this), parent)
{
    setRequest(new DescribeModelPackageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeModelPackageRequest * DescribeModelPackageResponse::request() const
{
    Q_D(const DescribeModelPackageResponse);
    return static_cast<const DescribeModelPackageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeModelPackage \a response.
 */
void DescribeModelPackageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeModelPackageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeModelPackageResponsePrivate
 * \brief The DescribeModelPackageResponsePrivate class provides private implementation for DescribeModelPackageResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeModelPackageResponsePrivate object with public implementation \a q.
 */
DescribeModelPackageResponsePrivate::DescribeModelPackageResponsePrivate(
    DescribeModelPackageResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeModelPackage response element from \a xml.
 */
void DescribeModelPackageResponsePrivate::parseDescribeModelPackageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeModelPackageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
