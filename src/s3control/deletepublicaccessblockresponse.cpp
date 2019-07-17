/*
    Copyright 2013-2019 Paul Colby

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

#include "deletepublicaccessblockresponse.h"
#include "deletepublicaccessblockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeletePublicAccessBlockResponse
 * \brief The DeletePublicAccessBlockResponse class provides an interace for S3Control DeletePublicAccessBlock responses.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane operations.
 *
 * \sa S3ControlClient::deletePublicAccessBlock
 */

/*!
 * Constructs a DeletePublicAccessBlockResponse object for \a reply to \a request, with parent \a parent.
 */
DeletePublicAccessBlockResponse::DeletePublicAccessBlockResponse(
        const DeletePublicAccessBlockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3ControlResponse(new DeletePublicAccessBlockResponsePrivate(this), parent)
{
    setRequest(new DeletePublicAccessBlockRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeletePublicAccessBlockRequest * DeletePublicAccessBlockResponse::request() const
{
    Q_D(const DeletePublicAccessBlockResponse);
    return static_cast<const DeletePublicAccessBlockRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful S3Control DeletePublicAccessBlock \a response.
 */
void DeletePublicAccessBlockResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeletePublicAccessBlockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::S3Control::DeletePublicAccessBlockResponsePrivate
 * \brief The DeletePublicAccessBlockResponsePrivate class provides private implementation for DeletePublicAccessBlockResponse.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeletePublicAccessBlockResponsePrivate object with public implementation \a q.
 */
DeletePublicAccessBlockResponsePrivate::DeletePublicAccessBlockResponsePrivate(
    DeletePublicAccessBlockResponse * const q) : S3ControlResponsePrivate(q)
{

}

/*!
 * Parses a S3Control DeletePublicAccessBlock response element from \a xml.
 */
void DeletePublicAccessBlockResponsePrivate::parseDeletePublicAccessBlockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePublicAccessBlockResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace S3Control
} // namespace QtAws
