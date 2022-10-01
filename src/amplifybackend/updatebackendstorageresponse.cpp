// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebackendstorageresponse.h"
#include "updatebackendstorageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendStorageResponse
 * \brief The UpdateBackendStorageResponse class provides an interace for AmplifyBackend UpdateBackendStorage responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendStorage
 */

/*!
 * Constructs a UpdateBackendStorageResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBackendStorageResponse::UpdateBackendStorageResponse(
        const UpdateBackendStorageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new UpdateBackendStorageResponsePrivate(this), parent)
{
    setRequest(new UpdateBackendStorageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBackendStorageRequest * UpdateBackendStorageResponse::request() const
{
    Q_D(const UpdateBackendStorageResponse);
    return static_cast<const UpdateBackendStorageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend UpdateBackendStorage \a response.
 */
void UpdateBackendStorageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBackendStorageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendStorageResponsePrivate
 * \brief The UpdateBackendStorageResponsePrivate class provides private implementation for UpdateBackendStorageResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendStorageResponsePrivate object with public implementation \a q.
 */
UpdateBackendStorageResponsePrivate::UpdateBackendStorageResponsePrivate(
    UpdateBackendStorageResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend UpdateBackendStorage response element from \a xml.
 */
void UpdateBackendStorageResponsePrivate::parseUpdateBackendStorageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBackendStorageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
