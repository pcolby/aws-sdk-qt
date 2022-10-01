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

#include "getenvironmentresponse.h"
#include "getenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Finspace {

/*!
 * \class QtAws::Finspace::GetEnvironmentResponse
 * \brief The GetEnvironmentResponse class provides an interace for Finspace GetEnvironment responses.
 *
 * \inmodule QtAwsFinspace
 *
 *  The FinSpace management service provides the APIs for managing FinSpace
 *
 * \sa FinspaceClient::getEnvironment
 */

/*!
 * Constructs a GetEnvironmentResponse object for \a reply to \a request, with parent \a parent.
 */
GetEnvironmentResponse::GetEnvironmentResponse(
        const GetEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : FinspaceResponse(new GetEnvironmentResponsePrivate(this), parent)
{
    setRequest(new GetEnvironmentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEnvironmentRequest * GetEnvironmentResponse::request() const
{
    Q_D(const GetEnvironmentResponse);
    return static_cast<const GetEnvironmentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Finspace GetEnvironment \a response.
 */
void GetEnvironmentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEnvironmentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Finspace::GetEnvironmentResponsePrivate
 * \brief The GetEnvironmentResponsePrivate class provides private implementation for GetEnvironmentResponse.
 * \internal
 *
 * \inmodule QtAwsFinspace
 */

/*!
 * Constructs a GetEnvironmentResponsePrivate object with public implementation \a q.
 */
GetEnvironmentResponsePrivate::GetEnvironmentResponsePrivate(
    GetEnvironmentResponse * const q) : FinspaceResponsePrivate(q)
{

}

/*!
 * Parses a Finspace GetEnvironment response element from \a xml.
 */
void GetEnvironmentResponsePrivate::parseGetEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEnvironmentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Finspace
} // namespace QtAws
