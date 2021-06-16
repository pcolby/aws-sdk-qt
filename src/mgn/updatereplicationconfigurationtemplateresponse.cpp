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

#include "updatereplicationconfigurationtemplateresponse.h"
#include "updatereplicationconfigurationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::UpdateReplicationConfigurationTemplateResponse
 * \brief The UpdateReplicationConfigurationTemplateResponse class provides an interace for mgn UpdateReplicationConfigurationTemplate responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::updateReplicationConfigurationTemplate
 */

/*!
 * Constructs a UpdateReplicationConfigurationTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateReplicationConfigurationTemplateResponse::UpdateReplicationConfigurationTemplateResponse(
        const UpdateReplicationConfigurationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new UpdateReplicationConfigurationTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateReplicationConfigurationTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateReplicationConfigurationTemplateRequest * UpdateReplicationConfigurationTemplateResponse::request() const
{
    Q_D(const UpdateReplicationConfigurationTemplateResponse);
    return static_cast<const UpdateReplicationConfigurationTemplateRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful mgn UpdateReplicationConfigurationTemplate \a response.
 */
void UpdateReplicationConfigurationTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateReplicationConfigurationTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::UpdateReplicationConfigurationTemplateResponsePrivate
 * \brief The UpdateReplicationConfigurationTemplateResponsePrivate class provides private implementation for UpdateReplicationConfigurationTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a UpdateReplicationConfigurationTemplateResponsePrivate object with public implementation \a q.
 */
UpdateReplicationConfigurationTemplateResponsePrivate::UpdateReplicationConfigurationTemplateResponsePrivate(
    UpdateReplicationConfigurationTemplateResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn UpdateReplicationConfigurationTemplate response element from \a xml.
 */
void UpdateReplicationConfigurationTemplateResponsePrivate::parseUpdateReplicationConfigurationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateReplicationConfigurationTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws
