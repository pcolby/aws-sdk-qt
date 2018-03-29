/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_LISTVOLUMERECOVERYPOINTSRESPONSE_H
#define QTAWS_LISTVOLUMERECOVERYPOINTSRESPONSE_H

#include "storagegatewayresponse.h"
#include "listvolumerecoverypointsrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListVolumeRecoveryPointsResponsePrivate;

class QTAWS_EXPORT ListVolumeRecoveryPointsResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    ListVolumeRecoveryPointsResponse(const ListVolumeRecoveryPointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVolumeRecoveryPointsRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(ListVolumeRecoveryPointsResponse)
    Q_DISABLE_COPY(ListVolumeRecoveryPointsResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
