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

#include "createbackendconfigresponse.h"
#include "createbackendconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateBackendConfigResponse
 * \brief The CreateBackendConfigResponse class provides an interace for AmplifyBackend CreateBackendConfig responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createBackendConfig
 */

/*!
 * Constructs a CreateBackendConfigResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBackendConfigResponse::CreateBackendConfigResponse(
        const CreateBackendConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new CreateBackendConfigResponsePrivate(this), parent)
{
    setRequest(new CreateBackendConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBackendConfigRequest * CreateBackendConfigResponse::request() const
{
    Q_D(const CreateBackendConfigResponse);
    return static_cast<const CreateBackendConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend CreateBackendConfig \a response.
 */
void CreateBackendConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBackendConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::CreateBackendConfigResponsePrivate
 * \brief The CreateBackendConfigResponsePrivate class provides private implementation for CreateBackendConfigResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateBackendConfigResponsePrivate object with public implementation \a q.
 */
CreateBackendConfigResponsePrivate::CreateBackendConfigResponsePrivate(
    CreateBackendConfigResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend CreateBackendConfig response element from \a xml.
 */
void CreateBackendConfigResponsePrivate::parseCreateBackendConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBackendConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
