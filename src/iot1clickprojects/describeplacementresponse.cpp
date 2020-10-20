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

#include "describeplacementresponse.h"
#include "describeplacementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::DescribePlacementResponse
 * \brief The DescribePlacementResponse class provides an interace for IoT1ClickProjects DescribePlacement responses.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::describePlacement
 */

/*!
 * Constructs a DescribePlacementResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePlacementResponse::DescribePlacementResponse(
        const DescribePlacementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickProjectsResponse(new DescribePlacementResponsePrivate(this), parent)
{
    setRequest(new DescribePlacementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePlacementRequest * DescribePlacementResponse::request() const
{
    Q_D(const DescribePlacementResponse);
    return static_cast<const DescribePlacementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickProjects DescribePlacement \a response.
 */
void DescribePlacementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePlacementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickProjects::DescribePlacementResponsePrivate
 * \brief The DescribePlacementResponsePrivate class provides private implementation for DescribePlacementResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a DescribePlacementResponsePrivate object with public implementation \a q.
 */
DescribePlacementResponsePrivate::DescribePlacementResponsePrivate(
    DescribePlacementResponse * const q) : IoT1ClickProjectsResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickProjects DescribePlacement response element from \a xml.
 */
void DescribePlacementResponsePrivate::parseDescribePlacementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePlacementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickProjects
} // namespace QtAws
