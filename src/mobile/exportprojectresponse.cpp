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

#include "exportprojectresponse.h"
#include "exportprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::ExportProjectResponse
 * \brief The ExportProjectResponse class provides an interace for Mobile ExportProject responses.
 *
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::exportProject
 */

/*!
 * Constructs a ExportProjectResponse object for \a reply to \a request, with parent \a parent.
 */
ExportProjectResponse::ExportProjectResponse(
        const ExportProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new ExportProjectResponsePrivate(this), parent)
{
    setRequest(new ExportProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportProjectRequest * ExportProjectResponse::request() const
{
    Q_D(const ExportProjectResponse);
    return static_cast<const ExportProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mobile ExportProject \a response.
 */
void ExportProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mobile::ExportProjectResponsePrivate
 * \brief The ExportProjectResponsePrivate class provides private implementation for ExportProjectResponse.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a ExportProjectResponsePrivate object with public implementation \a q.
 */
ExportProjectResponsePrivate::ExportProjectResponsePrivate(
    ExportProjectResponse * const q) : MobileResponsePrivate(q)
{

}

/*!
 * Parses a Mobile ExportProject response element from \a xml.
 */
void ExportProjectResponsePrivate::parseExportProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mobile
} // namespace QtAws
