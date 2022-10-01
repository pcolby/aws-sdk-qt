// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTORREQUEST_P_H
#define QTAWS_UPDATECONNECTORREQUEST_P_H

#include "transferrequest_p.h"
#include "updateconnectorrequest.h"

namespace QtAws {
namespace Transfer {

class UpdateConnectorRequest;

class UpdateConnectorRequestPrivate : public TransferRequestPrivate {

public:
    UpdateConnectorRequestPrivate(const TransferRequest::Action action,
                                   UpdateConnectorRequest * const q);
    UpdateConnectorRequestPrivate(const UpdateConnectorRequestPrivate &other,
                                   UpdateConnectorRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConnectorRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
