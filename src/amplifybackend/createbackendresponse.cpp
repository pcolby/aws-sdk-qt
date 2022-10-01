// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbackendresponse.h"
#include "createbackendresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::CreateBackendResponse
 * \brief The CreateBackendResponse class provides an interace for AmplifyBackend CreateBackend responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::createBackend
 */

/*!
 * Constructs a CreateBackendResponse object for \a reply to \a request, with parent \a parent.
 */
CreateBackendResponse::CreateBackendResponse(
        const CreateBackendRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new CreateBackendResponsePrivate(this), parent)
{
    setRequest(new CreateBackendRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateBackendRequest * CreateBackendResponse::request() const
{
    Q_D(const CreateBackendResponse);
    return static_cast<const CreateBackendRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend CreateBackend \a response.
 */
void CreateBackendResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateBackendResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::CreateBackendResponsePrivate
 * \brief The CreateBackendResponsePrivate class provides private implementation for CreateBackendResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a CreateBackendResponsePrivate object with public implementation \a q.
 */
CreateBackendResponsePrivate::CreateBackendResponsePrivate(
    CreateBackendResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend CreateBackend response element from \a xml.
 */
void CreateBackendResponsePrivate::parseCreateBackendResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBackendResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
