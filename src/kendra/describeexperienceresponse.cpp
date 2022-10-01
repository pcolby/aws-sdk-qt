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

#include "describeexperienceresponse.h"
#include "describeexperienceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeExperienceResponse
 * \brief The DescribeExperienceResponse class provides an interace for Kendra DescribeExperience responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeExperience
 */

/*!
 * Constructs a DescribeExperienceResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeExperienceResponse::DescribeExperienceResponse(
        const DescribeExperienceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DescribeExperienceResponsePrivate(this), parent)
{
    setRequest(new DescribeExperienceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeExperienceRequest * DescribeExperienceResponse::request() const
{
    Q_D(const DescribeExperienceResponse);
    return static_cast<const DescribeExperienceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DescribeExperience \a response.
 */
void DescribeExperienceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeExperienceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DescribeExperienceResponsePrivate
 * \brief The DescribeExperienceResponsePrivate class provides private implementation for DescribeExperienceResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeExperienceResponsePrivate object with public implementation \a q.
 */
DescribeExperienceResponsePrivate::DescribeExperienceResponsePrivate(
    DescribeExperienceResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DescribeExperience response element from \a xml.
 */
void DescribeExperienceResponsePrivate::parseDescribeExperienceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeExperienceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
