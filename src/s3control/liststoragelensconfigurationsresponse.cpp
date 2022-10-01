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

#include "liststoragelensconfigurationsresponse.h"
#include "liststoragelensconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::ListStorageLensConfigurationsResponse
 * \brief The ListStorageLensConfigurationsResponse class provides an interace for S3Control ListStorageLensConfigurations responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::listStorageLensConfigurations
 */

/*!
 * Constructs a ListStorageLensConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStorageLensConfigurationsResponse::ListStorageLensConfigurationsResponse(
        const ListStorageLensConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new ListStorageLensConfigurationsResponsePrivate(this), parent)
{
    setRequest(new ListStorageLensConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStorageLensConfigurationsRequest * ListStorageLensConfigurationsResponse::request() const
{
    Q_D(const ListStorageLensConfigurationsResponse);
    return static_cast<const ListStorageLensConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control ListStorageLensConfigurations \a response.
 */
void ListStorageLensConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStorageLensConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::ListStorageLensConfigurationsResponsePrivate
 * \brief The ListStorageLensConfigurationsResponsePrivate class provides private implementation for ListStorageLensConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a ListStorageLensConfigurationsResponsePrivate object with public implementation \a q.
 */
ListStorageLensConfigurationsResponsePrivate::ListStorageLensConfigurationsResponsePrivate(
    ListStorageLensConfigurationsResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control ListStorageLensConfigurations response element from \a xml.
 */
void ListStorageLensConfigurationsResponsePrivate::parseListStorageLensConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStorageLensConfigurationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
