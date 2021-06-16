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

#include "getapplicationresponse.h"
#include "getapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppRegistry {

/*!
 * \class QtAws::AppRegistry::GetApplicationResponse
 * \brief The GetApplicationResponse class provides an interace for AppRegistry GetApplication responses.
 *
 * \inmodule QtAwsAppRegistry
 *
 *  AWS Service Catalog AppRegistry enables organizations to understand the application context of their AWS resources.
 *  AppRegistry provides a repository of your applications, their resources, and the application metadata that you use
 *  within your
 *
 * \sa AppRegistryClient::getApplication
 */

/*!
 * Constructs a GetApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
GetApplicationResponse::GetApplicationResponse(
        const GetApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppRegistryResponse(new GetApplicationResponsePrivate(this), parent)
{
    setRequest(new GetApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetApplicationRequest * GetApplicationResponse::request() const
{
    Q_D(const GetApplicationResponse);
    return static_cast<const GetApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppRegistry GetApplication \a response.
 */
void GetApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppRegistry::GetApplicationResponsePrivate
 * \brief The GetApplicationResponsePrivate class provides private implementation for GetApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsAppRegistry
 */

/*!
 * Constructs a GetApplicationResponsePrivate object with public implementation \a q.
 */
GetApplicationResponsePrivate::GetApplicationResponsePrivate(
    GetApplicationResponse * const q) : AppRegistryResponsePrivate(q)
{

}

/*!
 * Parses a AppRegistry GetApplication response element from \a xml.
 */
void GetApplicationResponsePrivate::parseGetApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppRegistry
} // namespace QtAws
