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

#include "describecoderepositoryresponse.h"
#include "describecoderepositoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribeCodeRepositoryResponse
 * \brief The DescribeCodeRepositoryResponse class provides an interace for SageMaker DescribeCodeRepository responses.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::describeCodeRepository
 */

/*!
 * Constructs a DescribeCodeRepositoryResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCodeRepositoryResponse::DescribeCodeRepositoryResponse(
        const DescribeCodeRepositoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DescribeCodeRepositoryResponsePrivate(this), parent)
{
    setRequest(new DescribeCodeRepositoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCodeRepositoryRequest * DescribeCodeRepositoryResponse::request() const
{
    Q_D(const DescribeCodeRepositoryResponse);
    return static_cast<const DescribeCodeRepositoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SageMaker DescribeCodeRepository \a response.
 */
void DescribeCodeRepositoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCodeRepositoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SageMaker::DescribeCodeRepositoryResponsePrivate
 * \brief The DescribeCodeRepositoryResponsePrivate class provides private implementation for DescribeCodeRepositoryResponse.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribeCodeRepositoryResponsePrivate object with public implementation \a q.
 */
DescribeCodeRepositoryResponsePrivate::DescribeCodeRepositoryResponsePrivate(
    DescribeCodeRepositoryResponse * const q) : SageMakerResponsePrivate(q)
{

}

/*!
 * Parses a SageMaker DescribeCodeRepository response element from \a xml.
 */
void DescribeCodeRepositoryResponsePrivate::parseDescribeCodeRepositoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCodeRepositoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SageMaker
} // namespace QtAws
