// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createapikeyresponse.h"
#include "createapikeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateApiKeyResponse
 * \brief The CreateApiKeyResponse class provides an interace for AppSync CreateApiKey responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createApiKey
 */

/*!
 * Constructs a CreateApiKeyResponse object for \a reply to \a request, with parent \a parent.
 */
CreateApiKeyResponse::CreateApiKeyResponse(
        const CreateApiKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new CreateApiKeyResponsePrivate(this), parent)
{
    setRequest(new CreateApiKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateApiKeyRequest * CreateApiKeyResponse::request() const
{
    Q_D(const CreateApiKeyResponse);
    return static_cast<const CreateApiKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync CreateApiKey \a response.
 */
void CreateApiKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateApiKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::CreateApiKeyResponsePrivate
 * \brief The CreateApiKeyResponsePrivate class provides private implementation for CreateApiKeyResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateApiKeyResponsePrivate object with public implementation \a q.
 */
CreateApiKeyResponsePrivate::CreateApiKeyResponsePrivate(
    CreateApiKeyResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync CreateApiKey response element from \a xml.
 */
void CreateApiKeyResponsePrivate::parseCreateApiKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateApiKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
