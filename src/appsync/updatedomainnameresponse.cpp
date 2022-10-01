// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainnameresponse.h"
#include "updatedomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppSync {

/*!
 * \class QtAws::AppSync::UpdateDomainNameResponse
 * \brief The UpdateDomainNameResponse class provides an interace for AppSync UpdateDomainName responses.
 *
 * \inmodule QtAwsAppSync
 *
 *  AppSync provides API actions for creating and interacting with data sources using GraphQL from your
 *
 * \sa AppSyncClient::updateDomainName
 */

/*!
 * Constructs a UpdateDomainNameResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDomainNameResponse::UpdateDomainNameResponse(
        const UpdateDomainNameRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new UpdateDomainNameResponsePrivate(this), parent)
{
    setRequest(new UpdateDomainNameRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDomainNameRequest * UpdateDomainNameResponse::request() const
{
    Q_D(const UpdateDomainNameResponse);
    return static_cast<const UpdateDomainNameRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppSync UpdateDomainName \a response.
 */
void UpdateDomainNameResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDomainNameResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppSync::UpdateDomainNameResponsePrivate
 * \brief The UpdateDomainNameResponsePrivate class provides private implementation for UpdateDomainNameResponse.
 * \internal
 *
 * \inmodule QtAwsAppSync
 */

/*!
 * Constructs a UpdateDomainNameResponsePrivate object with public implementation \a q.
 */
UpdateDomainNameResponsePrivate::UpdateDomainNameResponsePrivate(
    UpdateDomainNameResponse * const q) : AppSyncResponsePrivate(q)
{

}

/*!
 * Parses a AppSync UpdateDomainName response element from \a xml.
 */
void UpdateDomainNameResponsePrivate::parseUpdateDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDomainNameResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppSync
} // namespace QtAws
