// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIPAMADDRESSHISTORYRESPONSE_P_H
#define QTAWS_GETIPAMADDRESSHISTORYRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class GetIpamAddressHistoryResponse;

class GetIpamAddressHistoryResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit GetIpamAddressHistoryResponsePrivate(GetIpamAddressHistoryResponse * const q);

    void parseGetIpamAddressHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIpamAddressHistoryResponse)
    Q_DISABLE_COPY(GetIpamAddressHistoryResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
