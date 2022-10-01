// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebackendresponse.h"
#include "deletebackendresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendResponse
 * \brief The DeleteBackendResponse class provides an interace for AmplifyBackend DeleteBackend responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteBackend
 */

/*!
 * Constructs a DeleteBackendResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackendResponse::DeleteBackendResponse(
        const DeleteBackendRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new DeleteBackendResponsePrivate(this), parent)
{
    setRequest(new DeleteBackendRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackendRequest * DeleteBackendResponse::request() const
{
    Q_D(const DeleteBackendResponse);
    return static_cast<const DeleteBackendRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend DeleteBackend \a response.
 */
void DeleteBackendResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackendResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendResponsePrivate
 * \brief The DeleteBackendResponsePrivate class provides private implementation for DeleteBackendResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteBackendResponsePrivate object with public implementation \a q.
 */
DeleteBackendResponsePrivate::DeleteBackendResponsePrivate(
    DeleteBackendResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend DeleteBackend response element from \a xml.
 */
void DeleteBackendResponsePrivate::parseDeleteBackendResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackendResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
