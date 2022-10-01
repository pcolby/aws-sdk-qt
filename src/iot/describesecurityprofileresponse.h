// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYPROFILERESPONSE_H
#define QTAWS_DESCRIBESECURITYPROFILERESPONSE_H

#include "iotresponse.h"
#include "describesecurityprofilerequest.h"

namespace QtAws {
namespace IoT {

class DescribeSecurityProfileResponsePrivate;

class QTAWSIOT_EXPORT DescribeSecurityProfileResponse : public IoTResponse {
    Q_OBJECT

public:
    DescribeSecurityProfileResponse(const DescribeSecurityProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeSecurityProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSecurityProfileResponse)
    Q_DISABLE_COPY(DescribeSecurityProfileResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
