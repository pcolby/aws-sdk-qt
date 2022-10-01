// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEINSTANCESTORAGECONFIGREQUEST_P_H
#define QTAWS_ASSOCIATEINSTANCESTORAGECONFIGREQUEST_P_H

#include "connectrequest_p.h"
#include "associateinstancestorageconfigrequest.h"

namespace QtAws {
namespace Connect {

class AssociateInstanceStorageConfigRequest;

class AssociateInstanceStorageConfigRequestPrivate : public ConnectRequestPrivate {

public:
    AssociateInstanceStorageConfigRequestPrivate(const ConnectRequest::Action action,
                                   AssociateInstanceStorageConfigRequest * const q);
    AssociateInstanceStorageConfigRequestPrivate(const AssociateInstanceStorageConfigRequestPrivate &other,
                                   AssociateInstanceStorageConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateInstanceStorageConfigRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
