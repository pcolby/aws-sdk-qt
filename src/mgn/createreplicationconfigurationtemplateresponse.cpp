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

#include "createreplicationconfigurationtemplateresponse.h"
#include "createreplicationconfigurationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::CreateReplicationConfigurationTemplateResponse
 * \brief The CreateReplicationConfigurationTemplateResponse class provides an interace for mgn CreateReplicationConfigurationTemplate responses.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::createReplicationConfigurationTemplate
 */

/*!
 * Constructs a CreateReplicationConfigurationTemplateResponse object for \a reply to \a request, with parent \a parent.
 */
CreateReplicationConfigurationTemplateResponse::CreateReplicationConfigurationTemplateResponse(
        const CreateReplicationConfigurationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : mgnResponse(new CreateReplicationConfigurationTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateReplicationConfigurationTemplateRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateReplicationConfigurationTemplateRequest * CreateReplicationConfigurationTemplateResponse::request() const
{
    return static_cast<const CreateReplicationConfigurationTemplateRequest *>(mgnResponse::request());
}

/*!
 * \reimp
 * Parses a successful mgn CreateReplicationConfigurationTemplate \a response.
 */
void CreateReplicationConfigurationTemplateResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateReplicationConfigurationTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::mgn::CreateReplicationConfigurationTemplateResponsePrivate
 * \brief The CreateReplicationConfigurationTemplateResponsePrivate class provides private implementation for CreateReplicationConfigurationTemplateResponse.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a CreateReplicationConfigurationTemplateResponsePrivate object with public implementation \a q.
 */
CreateReplicationConfigurationTemplateResponsePrivate::CreateReplicationConfigurationTemplateResponsePrivate(
    CreateReplicationConfigurationTemplateResponse * const q) : mgnResponsePrivate(q)
{

}

/*!
 * Parses a mgn CreateReplicationConfigurationTemplate response element from \a xml.
 */
void CreateReplicationConfigurationTemplateResponsePrivate::parseCreateReplicationConfigurationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReplicationConfigurationTemplateResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace mgn
} // namespace QtAws
