// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreplicationconfigurationresponse.h"
#include "getreplicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::GetReplicationConfigurationResponse
 * \brief The GetReplicationConfigurationResponse class provides an interace for Mgn GetReplicationConfiguration responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::getReplicationConfiguration
 */

/*!
 * Constructs a GetReplicationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetReplicationConfigurationResponse::GetReplicationConfigurationResponse(
        const GetReplicationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new GetReplicationConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetReplicationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetReplicationConfigurationRequest * GetReplicationConfigurationResponse::request() const
{
    Q_D(const GetReplicationConfigurationResponse);
    return static_cast<const GetReplicationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Mgn GetReplicationConfiguration \a response.
 */
void GetReplicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReplicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::GetReplicationConfigurationResponsePrivate
 * \brief The GetReplicationConfigurationResponsePrivate class provides private implementation for GetReplicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a GetReplicationConfigurationResponsePrivate object with public implementation \a q.
 */
GetReplicationConfigurationResponsePrivate::GetReplicationConfigurationResponsePrivate(
    GetReplicationConfigurationResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn GetReplicationConfiguration response element from \a xml.
 */
void GetReplicationConfigurationResponsePrivate::parseGetReplicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReplicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
