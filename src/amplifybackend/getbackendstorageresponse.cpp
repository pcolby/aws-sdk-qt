// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackendstorageresponse.h"
#include "getbackendstorageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendStorageResponse
 * \brief The GetBackendStorageResponse class provides an interace for AmplifyBackend GetBackendStorage responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendStorage
 */

/*!
 * Constructs a GetBackendStorageResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackendStorageResponse::GetBackendStorageResponse(
        const GetBackendStorageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new GetBackendStorageResponsePrivate(this), parent)
{
    setRequest(new GetBackendStorageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackendStorageRequest * GetBackendStorageResponse::request() const
{
    Q_D(const GetBackendStorageResponse);
    return static_cast<const GetBackendStorageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend GetBackendStorage \a response.
 */
void GetBackendStorageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackendStorageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendStorageResponsePrivate
 * \brief The GetBackendStorageResponsePrivate class provides private implementation for GetBackendStorageResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendStorageResponsePrivate object with public implementation \a q.
 */
GetBackendStorageResponsePrivate::GetBackendStorageResponsePrivate(
    GetBackendStorageResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend GetBackendStorage response element from \a xml.
 */
void GetBackendStorageResponsePrivate::parseGetBackendStorageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackendStorageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
