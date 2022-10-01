// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefailbackreplicationconfigurationresponse.h"
#include "updatefailbackreplicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::UpdateFailbackReplicationConfigurationResponse
 * \brief The UpdateFailbackReplicationConfigurationResponse class provides an interace for Drs UpdateFailbackReplicationConfiguration responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::updateFailbackReplicationConfiguration
 */

/*!
 * Constructs a UpdateFailbackReplicationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateFailbackReplicationConfigurationResponse::UpdateFailbackReplicationConfigurationResponse(
        const UpdateFailbackReplicationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new UpdateFailbackReplicationConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateFailbackReplicationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateFailbackReplicationConfigurationRequest * UpdateFailbackReplicationConfigurationResponse::request() const
{
    Q_D(const UpdateFailbackReplicationConfigurationResponse);
    return static_cast<const UpdateFailbackReplicationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs UpdateFailbackReplicationConfiguration \a response.
 */
void UpdateFailbackReplicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateFailbackReplicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::UpdateFailbackReplicationConfigurationResponsePrivate
 * \brief The UpdateFailbackReplicationConfigurationResponsePrivate class provides private implementation for UpdateFailbackReplicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a UpdateFailbackReplicationConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateFailbackReplicationConfigurationResponsePrivate::UpdateFailbackReplicationConfigurationResponsePrivate(
    UpdateFailbackReplicationConfigurationResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs UpdateFailbackReplicationConfiguration response element from \a xml.
 */
void UpdateFailbackReplicationConfigurationResponsePrivate::parseUpdateFailbackReplicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFailbackReplicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
