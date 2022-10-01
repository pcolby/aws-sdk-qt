// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROTOCOLSLISTREQUEST_P_H
#define QTAWS_DELETEPROTOCOLSLISTREQUEST_P_H

#include "fmsrequest_p.h"
#include "deleteprotocolslistrequest.h"

namespace QtAws {
namespace Fms {

class DeleteProtocolsListRequest;

class DeleteProtocolsListRequestPrivate : public FmsRequestPrivate {

public:
    DeleteProtocolsListRequestPrivate(const FmsRequest::Action action,
                                   DeleteProtocolsListRequest * const q);
    DeleteProtocolsListRequestPrivate(const DeleteProtocolsListRequestPrivate &other,
                                   DeleteProtocolsListRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProtocolsListRequest)

};

} // namespace Fms
} // namespace QtAws

#endif
