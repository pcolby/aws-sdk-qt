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

#include "deletereplicationconfigurationtemplateresponse.h"
#include "deletereplicationconfigurationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::DeleteReplicationConfigurationTemplateResponse
 * \brief The DeleteReplicationConfigurationTemplateResponse class provides an interace for mgn DeleteReplicationConfigurationTemplate responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::deleteReplicationConfigurationTemplate
 */

/*!
 * Constructs a DeleteReplicationConfigurationTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteReplicationConfigurationTemplateResponse::DeleteReplicationConfigurationTemplateResponse(
        const DeleteReplicationConfigurationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new DeleteReplicationConfigurationTemplateResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationConfigurationTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteReplicationConfigurationTemplateRequest * DeleteReplicationConfigurationTemplateResponse::request() const
{
    return static_cast<const DeleteReplicationConfigurationTemplateRequest *>(mgnResponse::request());
}

/*!
 * \reimp
 * Parses a successful mgn DeleteReplicationConfigurationTemplate \a response.
 */
void DeleteReplicationConfigurationTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteReplicationConfigurationTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::DeleteReplicationConfigurationTemplateResponsePrivate
 * \brief The DeleteReplicationConfigurationTemplateResponsePrivate class provides private implementation for DeleteReplicationConfigurationTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a DeleteReplicationConfigurationTemplateResponsePrivate object with public implementation \a q.
 */
DeleteReplicationConfigurationTemplateResponsePrivate::DeleteReplicationConfigurationTemplateResponsePrivate(
    DeleteReplicationConfigurationTemplateResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn DeleteReplicationConfigurationTemplate response element from \a xml.
 */
void DeleteReplicationConfigurationTemplateResponsePrivate::parseDeleteReplicationConfigurationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationConfigurationTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws
