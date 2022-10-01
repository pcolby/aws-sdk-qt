// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESECURITYPROFILERESPONSE_H
#define QTAWS_DESCRIBESECURITYPROFILERESPONSE_H

#include "connectresponse.h"
#include "describesecurityprofilerequest.h"

namespace QtAws {
namespace Connect {

class DescribeSecurityProfileResponsePrivate;

class QTAWSCONNECT_EXPORT DescribeSecurityProfileResponse : public ConnectResponse {
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

} // namespace Connect
} // namespace QtAws

#endif
