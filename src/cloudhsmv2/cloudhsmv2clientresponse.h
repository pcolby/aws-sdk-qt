/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CLOUDHSMV2CLIENTRESPONSE_H
#define QTAWS_CLOUDHSMV2CLIENTRESPONSE_H

#include "core/awsabstractresponse.h"
//#include "@todo-error.h"

namespace AWS {

namespace CloudHSMV2 {

class CloudHSMV2ClientResponsePrivate;

class QTAWS_EXPORT CloudHSMV2ClientResponse : public CloudHSMV2Response {
    Q_OBJECT

public:
    CloudHSMV2ClientResponse(QObject * const parent = 0);

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(CloudHSMV2ClientResponse)
    Q_DISABLE_COPY(CloudHSMV2ClientResponse)

};

} // namespace CloudHSMV2
} // namespace AWS

#endif
