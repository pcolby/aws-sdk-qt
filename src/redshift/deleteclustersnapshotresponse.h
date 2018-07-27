/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_DELETECLUSTERSNAPSHOTRESPONSE_H
#define QTAWS_DELETECLUSTERSNAPSHOTRESPONSE_H

#include "redshiftresponse.h"
#include "deleteclustersnapshotrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteClusterSnapshotResponsePrivate;

class QTAWS_EXPORT DeleteClusterSnapshotResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DeleteClusterSnapshotResponse(const DeleteClusterSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteClusterSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteClusterSnapshotResponse)
    Q_DISABLE_COPY(DeleteClusterSnapshotResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
