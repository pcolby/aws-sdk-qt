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

#include "getbackendapimodelsresponse.h"
#include "getbackendapimodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendAPIModelsResponse
 * \brief The GetBackendAPIModelsResponse class provides an interace for AmplifyBackend GetBackendAPIModels responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendAPIModels
 */

/*!
 * Constructs a GetBackendAPIModelsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackendAPIModelsResponse::GetBackendAPIModelsResponse(
        const GetBackendAPIModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new GetBackendAPIModelsResponsePrivate(this), parent)
{
    setRequest(new GetBackendAPIModelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackendAPIModelsRequest * GetBackendAPIModelsResponse::request() const
{
    Q_D(const GetBackendAPIModelsResponse);
    return static_cast<const GetBackendAPIModelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend GetBackendAPIModels \a response.
 */
void GetBackendAPIModelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackendAPIModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendAPIModelsResponsePrivate
 * \brief The GetBackendAPIModelsResponsePrivate class provides private implementation for GetBackendAPIModelsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendAPIModelsResponsePrivate object with public implementation \a q.
 */
GetBackendAPIModelsResponsePrivate::GetBackendAPIModelsResponsePrivate(
    GetBackendAPIModelsResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend GetBackendAPIModels response element from \a xml.
 */
void GetBackendAPIModelsResponsePrivate::parseGetBackendAPIModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackendAPIModelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
