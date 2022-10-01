// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
