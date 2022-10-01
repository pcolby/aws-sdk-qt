// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebackendconfigresponse.h"
#include "updatebackendconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendConfigResponse
 * \brief The UpdateBackendConfigResponse class provides an interace for AmplifyBackend UpdateBackendConfig responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendConfig
 */

/*!
 * Constructs a UpdateBackendConfigResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBackendConfigResponse::UpdateBackendConfigResponse(
        const UpdateBackendConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new UpdateBackendConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateBackendConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBackendConfigRequest * UpdateBackendConfigResponse::request() const
{
    Q_D(const UpdateBackendConfigResponse);
    return static_cast<const UpdateBackendConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend UpdateBackendConfig \a response.
 */
void UpdateBackendConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBackendConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendConfigResponsePrivate
 * \brief The UpdateBackendConfigResponsePrivate class provides private implementation for UpdateBackendConfigResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendConfigResponsePrivate object with public implementation \a q.
 */
UpdateBackendConfigResponsePrivate::UpdateBackendConfigResponsePrivate(
    UpdateBackendConfigResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend UpdateBackendConfig response element from \a xml.
 */
void UpdateBackendConfigResponsePrivate::parseUpdateBackendConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBackendConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
