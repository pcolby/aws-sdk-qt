// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebackendapiresponse.h"
#include "updatebackendapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendAPIResponse
 * \brief The UpdateBackendAPIResponse class provides an interace for AmplifyBackend UpdateBackendAPI responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendAPI
 */

/*!
 * Constructs a UpdateBackendAPIResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBackendAPIResponse::UpdateBackendAPIResponse(
        const UpdateBackendAPIRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new UpdateBackendAPIResponsePrivate(this), parent)
{
    setRequest(new UpdateBackendAPIRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBackendAPIRequest * UpdateBackendAPIResponse::request() const
{
    Q_D(const UpdateBackendAPIResponse);
    return static_cast<const UpdateBackendAPIRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend UpdateBackendAPI \a response.
 */
void UpdateBackendAPIResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBackendAPIResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendAPIResponsePrivate
 * \brief The UpdateBackendAPIResponsePrivate class provides private implementation for UpdateBackendAPIResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendAPIResponsePrivate object with public implementation \a q.
 */
UpdateBackendAPIResponsePrivate::UpdateBackendAPIResponsePrivate(
    UpdateBackendAPIResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend UpdateBackendAPI response element from \a xml.
 */
void UpdateBackendAPIResponsePrivate::parseUpdateBackendAPIResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBackendAPIResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
