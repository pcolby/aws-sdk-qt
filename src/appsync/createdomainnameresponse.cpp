// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdomainnameresponse.h"
#include "createdomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::CreateDomainNameResponse
 * \brief The CreateDomainNameResponse class provides an interace for AppSync CreateDomainName responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::createDomainName
 */

/*!
 * Constructs a CreateDomainNameResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDomainNameResponse::CreateDomainNameResponse(
        const CreateDomainNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new CreateDomainNameResponsePrivate(this), parent)
{
    setRequest(new CreateDomainNameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDomainNameRequest * CreateDomainNameResponse::request() const
{
    Q_D(const CreateDomainNameResponse);
    return static_cast<const CreateDomainNameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync CreateDomainName \a response.
 */
void CreateDomainNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDomainNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::CreateDomainNameResponsePrivate
 * \brief The CreateDomainNameResponsePrivate class provides private implementation for CreateDomainNameResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a CreateDomainNameResponsePrivate object with public implementation \a q.
 */
CreateDomainNameResponsePrivate::CreateDomainNameResponsePrivate(
    CreateDomainNameResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync CreateDomainName response element from \a xml.
 */
void CreateDomainNameResponsePrivate::parseCreateDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDomainNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
