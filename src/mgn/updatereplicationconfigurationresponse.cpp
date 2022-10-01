// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatereplicationconfigurationresponse.h"
#include "updatereplicationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mgn {

/*!
 * \class QtAws::Mgn::UpdateReplicationConfigurationResponse
 * \brief The UpdateReplicationConfigurationResponse class provides an interace for Mgn UpdateReplicationConfiguration responses.
 *
 * \inmodule QtAwsMgn
 *
 *  The Application Migration Service
 *
 * \sa MgnClient::updateReplicationConfiguration
 */

/*!
 * Constructs a UpdateReplicationConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateReplicationConfigurationResponse::UpdateReplicationConfigurationResponse(
        const UpdateReplicationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MgnResponse(new UpdateReplicationConfigurationResponsePrivate(this), parent)
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
 * Parses a successful Mgn UpdateReplicationConfiguration \a response.
 */
void UpdateReplicationConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateReplicationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mgn::UpdateReplicationConfigurationResponsePrivate
 * \brief The UpdateReplicationConfigurationResponsePrivate class provides private implementation for UpdateReplicationConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsMgn
 */

/*!
 * Constructs a UpdateReplicationConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateReplicationConfigurationResponsePrivate::UpdateReplicationConfigurationResponsePrivate(
    UpdateReplicationConfigurationResponse * const q) : MgnResponsePrivate(q)
{

}

/*!
 * Parses a Mgn UpdateReplicationConfiguration response element from \a xml.
 */
void UpdateReplicationConfigurationResponsePrivate::parseUpdateReplicationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateReplicationConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mgn
} // namespace QtAws
