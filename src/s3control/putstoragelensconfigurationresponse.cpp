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

#include "putstoragelensconfigurationresponse.h"
#include "putstoragelensconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::PutStorageLensConfigurationResponse
 * \brief The PutStorageLensConfigurationResponse class provides an interace for S3Control PutStorageLensConfiguration responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::putStorageLensConfiguration
 */

/*!
 * Constructs a PutStorageLensConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutStorageLensConfigurationResponse::PutStorageLensConfigurationResponse(
        const PutStorageLensConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new PutStorageLensConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutStorageLensConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutStorageLensConfigurationRequest * PutStorageLensConfigurationResponse::request() const
{
    Q_D(const PutStorageLensConfigurationResponse);
    return static_cast<const PutStorageLensConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control PutStorageLensConfiguration \a response.
 */
void PutStorageLensConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutStorageLensConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::PutStorageLensConfigurationResponsePrivate
 * \brief The PutStorageLensConfigurationResponsePrivate class provides private implementation for PutStorageLensConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a PutStorageLensConfigurationResponsePrivate object with public implementation \a q.
 */
PutStorageLensConfigurationResponsePrivate::PutStorageLensConfigurationResponsePrivate(
    PutStorageLensConfigurationResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control PutStorageLensConfiguration response element from \a xml.
 */
void PutStorageLensConfigurationResponsePrivate::parsePutStorageLensConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutStorageLensConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
