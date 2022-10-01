// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROTOCOLSLISTREQUEST_P_H
#define QTAWS_GETPROTOCOLSLISTREQUEST_P_H

#include "fmsrequest_p.h"
#include "getprotocolslistrequest.h"

namespace QtAws {
namespace Fms {

class GetProtocolsListRequest;

class GetProtocolsListRequestPrivate : public FmsRequestPrivate {

public:
    GetProtocolsListRequestPrivate(const FmsRequest::Action action,
                                   GetProtocolsListRequest * const q);
    GetProtocolsListRequestPrivate(const GetProtocolsListRequestPrivate &other,
                                   GetProtocolsListRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetProtocolsListRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
