// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINSTANCESTORAGECONFIGREQUEST_P_H
#define QTAWS_UPDATEINSTANCESTORAGECONFIGREQUEST_P_H

#include "connectrequest_p.h"
#include "updateinstancestorageconfigrequest.h"

namespace QtAws {
namespace Connect {

class UpdateInstanceStorageConfigRequest;

class UpdateInstanceStorageConfigRequestPrivate : public ConnectRequestPrivate {

public:
    UpdateInstanceStorageConfigRequestPrivate(const ConnectRequest::Action action,
                                   UpdateInstanceStorageConfigRequest * const q);
    UpdateInstanceStorageConfigRequestPrivate(const UpdateInstanceStorageConfigRequestPrivate &other,
                                   UpdateInstanceStorageConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateInstanceStorageConfigRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
