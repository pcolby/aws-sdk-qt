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

#include "updateaccesscontrolconfigurationresponse.h"
#include "updateaccesscontrolconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateAccessControlConfigurationResponse
 * \brief The UpdateAccessControlConfigurationResponse class provides an interace for Kendra UpdateAccessControlConfiguration responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateAccessControlConfiguration
 */

/*!
 * Constructs a UpdateAccessControlConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateAccessControlConfigurationResponse::UpdateAccessControlConfigurationResponse(
        const UpdateAccessControlConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new UpdateAccessControlConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateAccessControlConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateAccessControlConfigurationRequest * UpdateAccessControlConfigurationResponse::request() const
{
    Q_D(const UpdateAccessControlConfigurationResponse);
    return static_cast<const UpdateAccessControlConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra UpdateAccessControlConfiguration \a response.
 */
void UpdateAccessControlConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateAccessControlConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::UpdateAccessControlConfigurationResponsePrivate
 * \brief The UpdateAccessControlConfigurationResponsePrivate class provides private implementation for UpdateAccessControlConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateAccessControlConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateAccessControlConfigurationResponsePrivate::UpdateAccessControlConfigurationResponsePrivate(
    UpdateAccessControlConfigurationResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra UpdateAccessControlConfiguration response element from \a xml.
 */
void UpdateAccessControlConfigurationResponsePrivate::parseUpdateAccessControlConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccessControlConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
