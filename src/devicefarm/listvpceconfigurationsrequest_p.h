// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVPCECONFIGURATIONSREQUEST_P_H
#define QTAWS_LISTVPCECONFIGURATIONSREQUEST_P_H

#include "devicefarmrequest_p.h"
#include "listvpceconfigurationsrequest.h"

namespace QtAws {
namespace DeviceFarm {

class ListVPCEConfigurationsRequest;

class ListVPCEConfigurationsRequestPrivate : public DeviceFarmRequestPrivate {

public:
    ListVPCEConfigurationsRequestPrivate(const DeviceFarmRequest::Action action,
                                   ListVPCEConfigurationsRequest * const q);
    ListVPCEConfigurationsRequestPrivate(const ListVPCEConfigurationsRequestPrivate &other,
                                   ListVPCEConfigurationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListVPCEConfigurationsRequest)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
