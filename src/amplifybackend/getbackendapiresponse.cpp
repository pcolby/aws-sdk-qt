// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackendapiresponse.h"
#include "getbackendapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendAPIResponse
 * \brief The GetBackendAPIResponse class provides an interace for AmplifyBackend GetBackendAPI responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendAPI
 */

/*!
 * Constructs a GetBackendAPIResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackendAPIResponse::GetBackendAPIResponse(
        const GetBackendAPIRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new GetBackendAPIResponsePrivate(this), parent)
{
    setRequest(new GetBackendAPIRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackendAPIRequest * GetBackendAPIResponse::request() const
{
    Q_D(const GetBackendAPIResponse);
    return static_cast<const GetBackendAPIRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend GetBackendAPI \a response.
 */
void GetBackendAPIResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackendAPIResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendAPIResponsePrivate
 * \brief The GetBackendAPIResponsePrivate class provides private implementation for GetBackendAPIResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendAPIResponsePrivate object with public implementation \a q.
 */
GetBackendAPIResponsePrivate::GetBackendAPIResponsePrivate(
    GetBackendAPIResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend GetBackendAPI response element from \a xml.
 */
void GetBackendAPIResponsePrivate::parseGetBackendAPIResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackendAPIResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
