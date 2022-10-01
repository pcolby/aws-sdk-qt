// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getreplicationconfigurationresponse.h"
#include "getreplicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::GetReplicationConfigurationResponse
 * \brief The GetReplicationConfigurationResponse class provides an interace for Drs GetReplicationConfiguration responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::getReplicationConfiguration
 */

/*!
 * Constructs a GetReplicationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetReplicationConfigurationResponse::GetReplicationConfigurationResponse(
        const GetReplicationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new GetReplicationConfigurationResponsePrivate(this), parent)
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
 * Parses a successful Drs GetReplicationConfiguration \a response.
 */
void GetReplicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetReplicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::GetReplicationConfigurationResponsePrivate
 * \brief The GetReplicationConfigurationResponsePrivate class provides private implementation for GetReplicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a GetReplicationConfigurationResponsePrivate object with public implementation \a q.
 */
GetReplicationConfigurationResponsePrivate::GetReplicationConfigurationResponsePrivate(
    GetReplicationConfigurationResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs GetReplicationConfiguration response element from \a xml.
 */
void GetReplicationConfigurationResponsePrivate::parseGetReplicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetReplicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
