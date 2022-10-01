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

#include "removeapplicationinstanceresponse.h"
#include "removeapplicationinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Panorama {

/*!
 * \class QtAws::Panorama::RemoveApplicationInstanceResponse
 * \brief The RemoveApplicationInstanceResponse class provides an interace for Panorama RemoveApplicationInstance responses.
 *
 * \inmodule QtAwsPanorama
 *
 *  <fullname>AWS Panorama</fullname>
 * 
 *  <b>Overview</b>
 * 
 *  </p
 * 
 *  This is the <i>AWS Panorama API Reference</i>. For an introduction to the service, see <a
 *  href="https://docs.aws.amazon.com/panorama/latest/dev/panorama-welcome.html">What is AWS Panorama?</a> in the <i>AWS
 *  Panorama Developer
 *
 * \sa PanoramaClient::removeApplicationInstance
 */

/*!
 * Constructs a RemoveApplicationInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
RemoveApplicationInstanceResponse::RemoveApplicationInstanceResponse(
        const RemoveApplicationInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PanoramaResponse(new RemoveApplicationInstanceResponsePrivate(this), parent)
{
    setRequest(new RemoveApplicationInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RemoveApplicationInstanceRequest * RemoveApplicationInstanceResponse::request() const
{
    Q_D(const RemoveApplicationInstanceResponse);
    return static_cast<const RemoveApplicationInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Panorama RemoveApplicationInstance \a response.
 */
void RemoveApplicationInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RemoveApplicationInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Panorama::RemoveApplicationInstanceResponsePrivate
 * \brief The RemoveApplicationInstanceResponsePrivate class provides private implementation for RemoveApplicationInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsPanorama
 */

/*!
 * Constructs a RemoveApplicationInstanceResponsePrivate object with public implementation \a q.
 */
RemoveApplicationInstanceResponsePrivate::RemoveApplicationInstanceResponsePrivate(
    RemoveApplicationInstanceResponse * const q) : PanoramaResponsePrivate(q)
{

}

/*!
 * Parses a Panorama RemoveApplicationInstance response element from \a xml.
 */
void RemoveApplicationInstanceResponsePrivate::parseRemoveApplicationInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveApplicationInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Panorama
} // namespace QtAws
