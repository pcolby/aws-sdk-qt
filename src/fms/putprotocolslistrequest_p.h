// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROTOCOLSLISTREQUEST_P_H
#define QTAWS_PUTPROTOCOLSLISTREQUEST_P_H

#include "fmsrequest_p.h"
#include "putprotocolslistrequest.h"

namespace QtAws {
namespace Fms {

class PutProtocolsListRequest;

class PutProtocolsListRequestPrivate : public FmsRequestPrivate {

public:
    PutProtocolsListRequestPrivate(const FmsRequest::Action action,
                                   PutProtocolsListRequest * const q);
    PutProtocolsListRequestPrivate(const PutProtocolsListRequestPrivate &other,
                                   PutProtocolsListRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutProtocolsListRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
