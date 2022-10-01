// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "clonebackendresponse.h"
#include "clonebackendresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CloneBackendResponse
 * \brief The CloneBackendResponse class provides an interace for AmplifyBackend CloneBackend responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::cloneBackend
 */

/*!
 * Constructs a CloneBackendResponse object for \a reply to \a request, with parent \a parent.
 */
CloneBackendResponse::CloneBackendResponse(
        const CloneBackendRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new CloneBackendResponsePrivate(this), parent)
{
    setRequest(new CloneBackendRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CloneBackendRequest * CloneBackendResponse::request() const
{
    Q_D(const CloneBackendResponse);
    return static_cast<const CloneBackendRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend CloneBackend \a response.
 */
void CloneBackendResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CloneBackendResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::CloneBackendResponsePrivate
 * \brief The CloneBackendResponsePrivate class provides private implementation for CloneBackendResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CloneBackendResponsePrivate object with public implementation \a q.
 */
CloneBackendResponsePrivate::CloneBackendResponsePrivate(
    CloneBackendResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend CloneBackend response element from \a xml.
 */
void CloneBackendResponsePrivate::parseCloneBackendResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CloneBackendResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
