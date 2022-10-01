// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generatebackendapimodelsresponse.h"
#include "generatebackendapimodelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::GenerateBackendAPIModelsResponse
 * \brief The GenerateBackendAPIModelsResponse class provides an interace for AmplifyBackend GenerateBackendAPIModels responses.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 *
 * \sa AmplifyBackendClient::generateBackendAPIModels
 */

/*!
 * Constructs a GenerateBackendAPIModelsResponse object for \a reply to \a request, with parent \a parent.
 */
GenerateBackendAPIModelsResponse::GenerateBackendAPIModelsResponse(
        const GenerateBackendAPIModelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyBackendResponse(new GenerateBackendAPIModelsResponsePrivate(this), parent)
{
    setRequest(new GenerateBackendAPIModelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GenerateBackendAPIModelsRequest * GenerateBackendAPIModelsResponse::request() const
{
    Q_D(const GenerateBackendAPIModelsResponse);
    return static_cast<const GenerateBackendAPIModelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyBackend GenerateBackendAPIModels \a response.
 */
void GenerateBackendAPIModelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GenerateBackendAPIModelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyBackend::GenerateBackendAPIModelsResponsePrivate
 * \brief The GenerateBackendAPIModelsResponsePrivate class provides private implementation for GenerateBackendAPIModelsResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a GenerateBackendAPIModelsResponsePrivate object with public implementation \a q.
 */
GenerateBackendAPIModelsResponsePrivate::GenerateBackendAPIModelsResponsePrivate(
    GenerateBackendAPIModelsResponse * const q) : AmplifyBackendResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyBackend GenerateBackendAPIModels response element from \a xml.
 */
void GenerateBackendAPIModelsResponsePrivate::parseGenerateBackendAPIModelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GenerateBackendAPIModelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyBackend
} // namespace QtAws
