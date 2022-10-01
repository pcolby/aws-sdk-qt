// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHINGRESPONSE_H
#define QTAWS_DESCRIBETHINGRESPONSE_H

#include "iotresponse.h"
#include "describethingrequest.h"

namespace QtAws {
namespace IoT {

class DescribeThingResponsePrivate;

class QTAWSIOT_EXPORT DescribeThingResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeThingResponse(const DescribeThingRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeThingRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeThingResponse)
    Q_DISABLE_COPY(DescribeThingResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
