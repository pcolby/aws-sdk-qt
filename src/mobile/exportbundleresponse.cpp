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

#include "exportbundleresponse.h"
#include "exportbundleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::ExportBundleResponse
 * \brief The ExportBundleResponse class provides an interace for Mobile ExportBundle responses.
 *
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::exportBundle
 */

/*!
 * Constructs a ExportBundleResponse object for \a reply to \a request, with parent \a parent.
 */
ExportBundleResponse::ExportBundleResponse(
        const ExportBundleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new ExportBundleResponsePrivate(this), parent)
{
    setRequest(new ExportBundleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportBundleRequest * ExportBundleResponse::request() const
{
    return static_cast<const ExportBundleRequest *>(MobileResponse::request());
}

/*!
 * \reimp
 * Parses a successful Mobile ExportBundle \a response.
 */
void ExportBundleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportBundleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mobile::ExportBundleResponsePrivate
 * \brief The ExportBundleResponsePrivate class provides private implementation for ExportBundleResponse.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a ExportBundleResponsePrivate object with public implementation \a q.
 */
ExportBundleResponsePrivate::ExportBundleResponsePrivate(
    ExportBundleResponse * const q) : MobileResponsePrivate(q)
{

}

/*!
 * Parses a Mobile ExportBundle response element from \a xml.
 */
void ExportBundleResponsePrivate::parseExportBundleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportBundleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mobile
} // namespace QtAws
