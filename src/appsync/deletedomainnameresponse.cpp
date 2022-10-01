// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedomainnameresponse.h"
#include "deletedomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::DeleteDomainNameResponse
 * \brief The DeleteDomainNameResponse class provides an interace for AppSync DeleteDomainName responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::deleteDomainName
 */

/*!
 * Constructs a DeleteDomainNameResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDomainNameResponse::DeleteDomainNameResponse(
        const DeleteDomainNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new DeleteDomainNameResponsePrivate(this), parent)
{
    setRequest(new DeleteDomainNameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDomainNameRequest * DeleteDomainNameResponse::request() const
{
    Q_D(const DeleteDomainNameResponse);
    return static_cast<const DeleteDomainNameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync DeleteDomainName \a response.
 */
void DeleteDomainNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDomainNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::DeleteDomainNameResponsePrivate
 * \brief The DeleteDomainNameResponsePrivate class provides private implementation for DeleteDomainNameResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a DeleteDomainNameResponsePrivate object with public implementation \a q.
 */
DeleteDomainNameResponsePrivate::DeleteDomainNameResponsePrivate(
    DeleteDomainNameResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync DeleteDomainName response element from \a xml.
 */
void DeleteDomainNameResponsePrivate::parseDeleteDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDomainNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
