// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNASSIGNPRIVATEIPADDRESSESRESPONSE_H
#define QTAWS_UNASSIGNPRIVATEIPADDRESSESRESPONSE_H

#include "ec2response.h"
#include "unassignprivateipaddressesrequest.h"

namespace QtAws {
namespace Ec2 {

class UnassignPrivateIpAddressesResponsePrivate;

class QTAWSEC2_EXPORT UnassignPrivateIpAddressesResponse : public Ec2Response {
    Q_OBJECT

public:
    UnassignPrivateIpAddressesResponse(const UnassignPrivateIpAddressesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UnassignPrivateIpAddressesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnassignPrivateIpAddressesResponse)
    Q_DISABLE_COPY(UnassignPrivateIpAddressesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
