// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESMBSETTINGSREQUEST_P_H
#define QTAWS_DESCRIBESMBSETTINGSREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describesmbsettingsrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeSMBSettingsRequest;

class DescribeSMBSettingsRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeSMBSettingsRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeSMBSettingsRequest * const q);
    DescribeSMBSettingsRequestPrivate(const DescribeSMBSettingsRequestPrivate &other,
                                   DescribeSMBSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSMBSettingsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
