// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdomainnameresponse.h"
#include "getdomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::GetDomainNameResponse
 * \brief The GetDomainNameResponse class provides an interace for AppSync GetDomainName responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::getDomainName
 */

/*!
 * Constructs a GetDomainNameResponse object for \a reply to \a request, with parent \a parent.
 */
GetDomainNameResponse::GetDomainNameResponse(
        const GetDomainNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new GetDomainNameResponsePrivate(this), parent)
{
    setRequest(new GetDomainNameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDomainNameRequest * GetDomainNameResponse::request() const
{
    Q_D(const GetDomainNameResponse);
    return static_cast<const GetDomainNameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync GetDomainName \a response.
 */
void GetDomainNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDomainNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::GetDomainNameResponsePrivate
 * \brief The GetDomainNameResponsePrivate class provides private implementation for GetDomainNameResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a GetDomainNameResponsePrivate object with public implementation \a q.
 */
GetDomainNameResponsePrivate::GetDomainNameResponsePrivate(
    GetDomainNameResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync GetDomainName response element from \a xml.
 */
void GetDomainNameResponsePrivate::parseGetDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
