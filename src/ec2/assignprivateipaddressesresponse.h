// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNPRIVATEIPADDRESSESRESPONSE_H
#define QTAWS_ASSIGNPRIVATEIPADDRESSESRESPONSE_H

#include "ec2response.h"
#include "assignprivateipaddressesrequest.h"

namespace QtAws {
namespace Ec2 {

class AssignPrivateIpAddressesResponsePrivate;

class QTAWSEC2_EXPORT AssignPrivateIpAddressesResponse : public Ec2Response {
    Q_OBJECT

public:
    AssignPrivateIpAddressesResponse(const AssignPrivateIpAddressesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssignPrivateIpAddressesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssignPrivateIpAddressesResponse)
    Q_DISABLE_COPY(AssignPrivateIpAddressesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
