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

#include "importbackendstorageresponse.h"
#include "importbackendstorageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::ImportBackendStorageResponse
 * \brief The ImportBackendStorageResponse class provides an interace for AmplifyBackend ImportBackendStorage responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::importBackendStorage
 */

/*!
 * Constructs a ImportBackendStorageResponse object for \a reply to \a request, with parent \a parent.
 */
ImportBackendStorageResponse::ImportBackendStorageResponse(
        const ImportBackendStorageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new ImportBackendStorageResponsePrivate(this), parent)
{
    setRequest(new ImportBackendStorageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportBackendStorageRequest * ImportBackendStorageResponse::request() const
{
    Q_D(const ImportBackendStorageResponse);
    return static_cast<const ImportBackendStorageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend ImportBackendStorage \a response.
 */
void ImportBackendStorageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportBackendStorageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::ImportBackendStorageResponsePrivate
 * \brief The ImportBackendStorageResponsePrivate class provides private implementation for ImportBackendStorageResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a ImportBackendStorageResponsePrivate object with public implementation \a q.
 */
ImportBackendStorageResponsePrivate::ImportBackendStorageResponsePrivate(
    ImportBackendStorageResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend ImportBackendStorage response element from \a xml.
 */
void ImportBackendStorageResponsePrivate::parseImportBackendStorageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportBackendStorageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
