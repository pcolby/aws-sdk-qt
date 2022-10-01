// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getfailbackreplicationconfigurationresponse.h"
#include "getfailbackreplicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::GetFailbackReplicationConfigurationResponse
 * \brief The GetFailbackReplicationConfigurationResponse class provides an interace for Drs GetFailbackReplicationConfiguration responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::getFailbackReplicationConfiguration
 */

/*!
 * Constructs a GetFailbackReplicationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetFailbackReplicationConfigurationResponse::GetFailbackReplicationConfigurationResponse(
        const GetFailbackReplicationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new GetFailbackReplicationConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetFailbackReplicationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFailbackReplicationConfigurationRequest * GetFailbackReplicationConfigurationResponse::request() const
{
    Q_D(const GetFailbackReplicationConfigurationResponse);
    return static_cast<const GetFailbackReplicationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs GetFailbackReplicationConfiguration \a response.
 */
void GetFailbackReplicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFailbackReplicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::GetFailbackReplicationConfigurationResponsePrivate
 * \brief The GetFailbackReplicationConfigurationResponsePrivate class provides private implementation for GetFailbackReplicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a GetFailbackReplicationConfigurationResponsePrivate object with public implementation \a q.
 */
GetFailbackReplicationConfigurationResponsePrivate::GetFailbackReplicationConfigurationResponsePrivate(
    GetFailbackReplicationConfigurationResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs GetFailbackReplicationConfiguration response element from \a xml.
 */
void GetFailbackReplicationConfigurationResponsePrivate::parseGetFailbackReplicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFailbackReplicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
