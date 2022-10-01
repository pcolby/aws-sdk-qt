// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEINSTANCESTORAGECONFIGREQUEST_P_H
#define QTAWS_DISASSOCIATEINSTANCESTORAGECONFIGREQUEST_P_H

#include "connectrequest_p.h"
#include "disassociateinstancestorageconfigrequest.h"

namespace QtAws {
namespace Connect {

class DisassociateInstanceStorageConfigRequest;

class DisassociateInstanceStorageConfigRequestPrivate : public ConnectRequestPrivate {

public:
    DisassociateInstanceStorageConfigRequestPrivate(const ConnectRequest::Action action,
                                   DisassociateInstanceStorageConfigRequest * const q);
    DisassociateInstanceStorageConfigRequestPrivate(const DisassociateInstanceStorageConfigRequestPrivate &other,
                                   DisassociateInstanceStorageConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateInstanceStorageConfigRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
