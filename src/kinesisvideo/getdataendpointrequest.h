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

#ifndef QTAWS_GETDATAENDPOINTREQUEST_H
#define QTAWS_GETDATAENDPOINTREQUEST_H

#include "kinesisvideorequest.h"

namespace AWS {

namespace KinesisVideo {

class GetDataEndpointRequestPrivate;

class QTAWS_EXPORT GetDataEndpointRequest : public KinesisVideoRequest {

public:
    GetDataEndpointRequest(const GetDataEndpointRequest &other);
    GetDataEndpointRequest();

    virtual bool isValid() const;


protected:
    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const;

private:
    Q_DECLARE_PRIVATE(GetDataEndpointRequest)

}

} // namespace KinesisVideo
} // namespace AWS

#endif
