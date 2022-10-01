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

#include "deleteaccesscontrolconfigurationresponse.h"
#include "deleteaccesscontrolconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteAccessControlConfigurationResponse
 * \brief The DeleteAccessControlConfigurationResponse class provides an interace for Kendra DeleteAccessControlConfiguration responses.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteAccessControlConfiguration
 */

/*!
 * Constructs a DeleteAccessControlConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAccessControlConfigurationResponse::DeleteAccessControlConfigurationResponse(
        const DeleteAccessControlConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KendraResponse(new DeleteAccessControlConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteAccessControlConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAccessControlConfigurationRequest * DeleteAccessControlConfigurationResponse::request() const
{
    Q_D(const DeleteAccessControlConfigurationResponse);
    return static_cast<const DeleteAccessControlConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Kendra DeleteAccessControlConfiguration \a response.
 */
void DeleteAccessControlConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAccessControlConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Kendra::DeleteAccessControlConfigurationResponsePrivate
 * \brief The DeleteAccessControlConfigurationResponsePrivate class provides private implementation for DeleteAccessControlConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteAccessControlConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteAccessControlConfigurationResponsePrivate::DeleteAccessControlConfigurationResponsePrivate(
    DeleteAccessControlConfigurationResponse * const q) : KendraResponsePrivate(q)
{

}

/*!
 * Parses a Kendra DeleteAccessControlConfiguration response element from \a xml.
 */
void DeleteAccessControlConfigurationResponsePrivate::parseDeleteAccessControlConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAccessControlConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Kendra
} // namespace QtAws
