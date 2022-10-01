// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETHINGTYPERESPONSE_H
#define QTAWS_DESCRIBETHINGTYPERESPONSE_H

#include "iotresponse.h"
#include "describethingtyperequest.h"

namespace QtAws {
namespace IoT {

class DescribeThingTypeResponsePrivate;

class QTAWSIOT_EXPORT DescribeThingTypeResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeThingTypeResponse(const DescribeThingTypeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeThingTypeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeThingTypeResponse)
    Q_DISABLE_COPY(DescribeThingTypeResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
