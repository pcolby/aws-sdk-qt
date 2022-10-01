// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbackendapiresponse.h"
#include "createbackendapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateBackendAPIResponse
 * \brief The CreateBackendAPIResponse class provides an interace for AmplifyBackend CreateBackendAPI responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createBackendAPI
 */

/*!
 * Constructs a CreateBackendAPIResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBackendAPIResponse::CreateBackendAPIResponse(
        const CreateBackendAPIRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new CreateBackendAPIResponsePrivate(this), parent)
{
    setRequest(new CreateBackendAPIRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBackendAPIRequest * CreateBackendAPIResponse::request() const
{
    Q_D(const CreateBackendAPIResponse);
    return static_cast<const CreateBackendAPIRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend CreateBackendAPI \a response.
 */
void CreateBackendAPIResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBackendAPIResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::CreateBackendAPIResponsePrivate
 * \brief The CreateBackendAPIResponsePrivate class provides private implementation for CreateBackendAPIResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateBackendAPIResponsePrivate object with public implementation \a q.
 */
CreateBackendAPIResponsePrivate::CreateBackendAPIResponsePrivate(
    CreateBackendAPIResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend CreateBackendAPI response element from \a xml.
 */
void CreateBackendAPIResponsePrivate::parseCreateBackendAPIResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBackendAPIResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
