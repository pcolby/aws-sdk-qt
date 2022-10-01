// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebackendapiresponse.h"
#include "deletebackendapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendAPIResponse
 * \brief The DeleteBackendAPIResponse class provides an interace for AmplifyBackend DeleteBackendAPI responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::deleteBackendAPI
 */

/*!
 * Constructs a DeleteBackendAPIResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBackendAPIResponse::DeleteBackendAPIResponse(
        const DeleteBackendAPIRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new DeleteBackendAPIResponsePrivate(this), parent)
{
    setRequest(new DeleteBackendAPIRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBackendAPIRequest * DeleteBackendAPIResponse::request() const
{
    Q_D(const DeleteBackendAPIResponse);
    return static_cast<const DeleteBackendAPIRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend DeleteBackendAPI \a response.
 */
void DeleteBackendAPIResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBackendAPIResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::DeleteBackendAPIResponsePrivate
 * \brief The DeleteBackendAPIResponsePrivate class provides private implementation for DeleteBackendAPIResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a DeleteBackendAPIResponsePrivate object with public implementation \a q.
 */
DeleteBackendAPIResponsePrivate::DeleteBackendAPIResponsePrivate(
    DeleteBackendAPIResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend DeleteBackendAPI response element from \a xml.
 */
void DeleteBackendAPIResponsePrivate::parseDeleteBackendAPIResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBackendAPIResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
