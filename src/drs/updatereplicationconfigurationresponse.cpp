// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatereplicationconfigurationresponse.h"
#include "updatereplicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Drs {

/*!
 * \class QtAws::Drs::UpdateReplicationConfigurationResponse
 * \brief The UpdateReplicationConfigurationResponse class provides an interace for Drs UpdateReplicationConfiguration responses.
 *
 * \inmodule QtAwsDrs
 *
 *  AWS Elastic Disaster Recovery
 *
 * \sa DrsClient::updateReplicationConfiguration
 */

/*!
 * Constructs a UpdateReplicationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateReplicationConfigurationResponse::UpdateReplicationConfigurationResponse(
        const UpdateReplicationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DrsResponse(new UpdateReplicationConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateReplicationConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateReplicationConfigurationRequest * UpdateReplicationConfigurationResponse::request() const
{
    Q_D(const UpdateReplicationConfigurationResponse);
    return static_cast<const UpdateReplicationConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Drs UpdateReplicationConfiguration \a response.
 */
void UpdateReplicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateReplicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Drs::UpdateReplicationConfigurationResponsePrivate
 * \brief The UpdateReplicationConfigurationResponsePrivate class provides private implementation for UpdateReplicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsDrs
 */

/*!
 * Constructs a UpdateReplicationConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateReplicationConfigurationResponsePrivate::UpdateReplicationConfigurationResponsePrivate(
    UpdateReplicationConfigurationResponse * const q) : DrsResponsePrivate(q)
{

}

/*!
 * Parses a Drs UpdateReplicationConfiguration response element from \a xml.
 */
void UpdateReplicationConfigurationResponsePrivate::parseUpdateReplicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateReplicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Drs
} // namespace QtAws
