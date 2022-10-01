// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVICESETTINGREQUEST_P_H
#define QTAWS_GETSERVICESETTINGREQUEST_P_H

#include "ssmrequest_p.h"
#include "getservicesettingrequest.h"

namespace QtAws {
namespace Ssm {

class GetServiceSettingRequest;

class GetServiceSettingRequestPrivate : public SsmRequestPrivate {

public:
    GetServiceSettingRequestPrivate(const SsmRequest::Action action,
                                   GetServiceSettingRequest * const q);
    GetServiceSettingRequestPrivate(const GetServiceSettingRequestPrivate &other,
                                   GetServiceSettingRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetServiceSettingRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
