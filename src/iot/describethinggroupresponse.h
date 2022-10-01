// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHINGGROUPRESPONSE_H
#define QTAWS_DESCRIBETHINGGROUPRESPONSE_H

#include "iotresponse.h"
#include "describethinggrouprequest.h"

namespace QtAws {
namespace IoT {

class DescribeThingGroupResponsePrivate;

class QTAWSIOT_EXPORT DescribeThingGroupResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeThingGroupResponse(const DescribeThingGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeThingGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeThingGroupResponse)
    Q_DISABLE_COPY(DescribeThingGroupResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
