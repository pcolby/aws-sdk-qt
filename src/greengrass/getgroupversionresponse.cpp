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

#include "getgroupversionresponse.h"
#include "getgroupversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetGroupVersionResponse
 * \brief The GetGroupVersionResponse class provides an interace for Greengrass GetGroupVersion responses.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getGroupVersion
 */

/*!
 * Constructs a GetGroupVersionResponse object for \a reply to \a request, with parent \a parent.
 */
GetGroupVersionResponse::GetGroupVersionResponse(
        const GetGroupVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetGroupVersionResponsePrivate(this), parent)
{
    setRequest(new GetGroupVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetGroupVersionRequest * GetGroupVersionResponse::request() const
{
    Q_D(const GetGroupVersionResponse);
    return static_cast<const GetGroupVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Greengrass GetGroupVersion \a response.
 */
void GetGroupVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetGroupVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Greengrass::GetGroupVersionResponsePrivate
 * \brief The GetGroupVersionResponsePrivate class provides private implementation for GetGroupVersionResponse.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetGroupVersionResponsePrivate object with public implementation \a q.
 */
GetGroupVersionResponsePrivate::GetGroupVersionResponsePrivate(
    GetGroupVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * Parses a Greengrass GetGroupVersion response element from \a xml.
 */
void GetGroupVersionResponsePrivate::parseGetGroupVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGroupVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Greengrass
} // namespace QtAws
