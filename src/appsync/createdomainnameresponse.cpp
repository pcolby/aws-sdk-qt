/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
