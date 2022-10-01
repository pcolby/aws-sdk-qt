// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbackendapimodelsresponse.h"
#include "getbackendapimodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GetBackendAPIModelsResponse
 * \brief The GetBackendAPIModelsResponse class provides an interace for AmplifyBackend GetBackendAPIModels responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::getBackendAPIModels
 */

/*!
 * Constructs a GetBackendAPIModelsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBackendAPIModelsResponse::GetBackendAPIModelsResponse(
        const GetBackendAPIModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new GetBackendAPIModelsResponsePrivate(this), parent)
{
    setRequest(new GetBackendAPIModelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBackendAPIModelsRequest * GetBackendAPIModelsResponse::request() const
{
    Q_D(const GetBackendAPIModelsResponse);
    return static_cast<const GetBackendAPIModelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend GetBackendAPIModels \a response.
 */
void GetBackendAPIModelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBackendAPIModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::GetBackendAPIModelsResponsePrivate
 * \brief The GetBackendAPIModelsResponsePrivate class provides private implementation for GetBackendAPIModelsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GetBackendAPIModelsResponsePrivate object with public implementation \a q.
 */
GetBackendAPIModelsResponsePrivate::GetBackendAPIModelsResponsePrivate(
    GetBackendAPIModelsResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend GetBackendAPIModels response element from \a xml.
 */
void GetBackendAPIModelsResponsePrivate::parseGetBackendAPIModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBackendAPIModelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
