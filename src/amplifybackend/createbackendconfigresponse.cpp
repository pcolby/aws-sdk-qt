// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbackendconfigresponse.h"
#include "createbackendconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateBackendConfigResponse
 * \brief The CreateBackendConfigResponse class provides an interace for AmplifyBackend CreateBackendConfig responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createBackendConfig
 */

/*!
 * Constructs a CreateBackendConfigResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBackendConfigResponse::CreateBackendConfigResponse(
        const CreateBackendConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new CreateBackendConfigResponsePrivate(this), parent)
{
    setRequest(new CreateBackendConfigRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBackendConfigRequest * CreateBackendConfigResponse::request() const
{
    Q_D(const CreateBackendConfigResponse);
    return static_cast<const CreateBackendConfigRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend CreateBackendConfig \a response.
 */
void CreateBackendConfigResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBackendConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::CreateBackendConfigResponsePrivate
 * \brief The CreateBackendConfigResponsePrivate class provides private implementation for CreateBackendConfigResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateBackendConfigResponsePrivate object with public implementation \a q.
 */
CreateBackendConfigResponsePrivate::CreateBackendConfigResponsePrivate(
    CreateBackendConfigResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend CreateBackendConfig response element from \a xml.
 */
void CreateBackendConfigResponsePrivate::parseCreateBackendConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBackendConfigResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
