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

#ifndef QTAWS_CREATEINSTANCESFROMSNAPSHOTRESPONSE_H
#define QTAWS_CREATEINSTANCESFROMSNAPSHOTRESPONSE_H

#include "lightsailresponse.h"
#include "createinstancesfromsnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class CreateInstancesFromSnapshotResponsePrivate;

class QTAWS_EXPORT CreateInstancesFromSnapshotResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateInstancesFromSnapshotResponse(const CreateInstancesFromSnapshotRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateInstancesFromSnapshotRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateInstancesFromSnapshotResponse)
    Q_DISABLE_COPY(CreateInstancesFromSnapshotResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
