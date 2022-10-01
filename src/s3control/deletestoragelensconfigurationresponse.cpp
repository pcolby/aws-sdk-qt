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

#include "deletestoragelensconfigurationresponse.h"
#include "deletestoragelensconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteStorageLensConfigurationResponse
 * \brief The DeleteStorageLensConfigurationResponse class provides an interace for S3Control DeleteStorageLensConfiguration responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteStorageLensConfiguration
 */

/*!
 * Constructs a DeleteStorageLensConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteStorageLensConfigurationResponse::DeleteStorageLensConfigurationResponse(
        const DeleteStorageLensConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DeleteStorageLensConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteStorageLensConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteStorageLensConfigurationRequest * DeleteStorageLensConfigurationResponse::request() const
{
    Q_D(const DeleteStorageLensConfigurationResponse);
    return static_cast<const DeleteStorageLensConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DeleteStorageLensConfiguration \a response.
 */
void DeleteStorageLensConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteStorageLensConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DeleteStorageLensConfigurationResponsePrivate
 * \brief The DeleteStorageLensConfigurationResponsePrivate class provides private implementation for DeleteStorageLensConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteStorageLensConfigurationResponsePrivate object with public implementation \a q.
 */
DeleteStorageLensConfigurationResponsePrivate::DeleteStorageLensConfigurationResponsePrivate(
    DeleteStorageLensConfigurationResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DeleteStorageLensConfiguration response element from \a xml.
 */
void DeleteStorageLensConfigurationResponsePrivate::parseDeleteStorageLensConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStorageLensConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
