// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtyperesponse.h"
#include "createtyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateTypeResponse
 * \brief The CreateTypeResponse class provides an interace for AppSync CreateType responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createType
 */

/*!
 * Constructs a CreateTypeResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTypeResponse::CreateTypeResponse(
        const CreateTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new CreateTypeResponsePrivate(this), parent)
{
    setRequest(new CreateTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTypeRequest * CreateTypeResponse::request() const
{
    Q_D(const CreateTypeResponse);
    return static_cast<const CreateTypeRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync CreateType \a response.
 */
void CreateTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::CreateTypeResponsePrivate
 * \brief The CreateTypeResponsePrivate class provides private implementation for CreateTypeResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateTypeResponsePrivate object with public implementation \a q.
 */
CreateTypeResponsePrivate::CreateTypeResponsePrivate(
    CreateTypeResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync CreateType response element from \a xml.
 */
void CreateTypeResponsePrivate::parseCreateTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
