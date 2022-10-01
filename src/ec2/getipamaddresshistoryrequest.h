// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPAMADDRESSHISTORYREQUEST_H
#define QTAWS_GETIPAMADDRESSHISTORYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetIpamAddressHistoryRequestPrivate;

class QTAWSEC2_EXPORT GetIpamAddressHistoryRequest : public Ec2Request {

public:
    GetIpamAddressHistoryRequest(const GetIpamAddressHistoryRequest &other);
    GetIpamAddressHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIpamAddressHistoryRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
