// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebackendjobresponse.h"
#include "updatebackendjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendJobResponse
 * \brief The UpdateBackendJobResponse class provides an interace for AmplifyBackend UpdateBackendJob responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::updateBackendJob
 */

/*!
 * Constructs a UpdateBackendJobResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBackendJobResponse::UpdateBackendJobResponse(
        const UpdateBackendJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new UpdateBackendJobResponsePrivate(this), parent)
{
    setRequest(new UpdateBackendJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBackendJobRequest * UpdateBackendJobResponse::request() const
{
    Q_D(const UpdateBackendJobResponse);
    return static_cast<const UpdateBackendJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend UpdateBackendJob \a response.
 */
void UpdateBackendJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBackendJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::UpdateBackendJobResponsePrivate
 * \brief The UpdateBackendJobResponsePrivate class provides private implementation for UpdateBackendJobResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a UpdateBackendJobResponsePrivate object with public implementation \a q.
 */
UpdateBackendJobResponsePrivate::UpdateBackendJobResponsePrivate(
    UpdateBackendJobResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend UpdateBackendJob response element from \a xml.
 */
void UpdateBackendJobResponsePrivate::parseUpdateBackendJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBackendJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
