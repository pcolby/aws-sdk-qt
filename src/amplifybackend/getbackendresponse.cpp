// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackendresponse.h"
#include "getbackendresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendResponse
 * \brief The GetBackendResponse class provides an interace for AmplifyBackend GetBackend responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackend
 */

/*!
 * Constructs a GetBackendResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackendResponse::GetBackendResponse(
        const GetBackendRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new GetBackendResponsePrivate(this), parent)
{
    setRequest(new GetBackendRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackendRequest * GetBackendResponse::request() const
{
    Q_D(const GetBackendResponse);
    return static_cast<const GetBackendRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend GetBackend \a response.
 */
void GetBackendResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackendResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendResponsePrivate
 * \brief The GetBackendResponsePrivate class provides private implementation for GetBackendResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendResponsePrivate object with public implementation \a q.
 */
GetBackendResponsePrivate::GetBackendResponsePrivate(
    GetBackendResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend GetBackend response element from \a xml.
 */
void GetBackendResponsePrivate::parseGetBackendResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackendResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
