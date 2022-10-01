// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETSERVICESETTINGREQUEST_P_H
#define QTAWS_RESETSERVICESETTINGREQUEST_P_H

#include "ssmrequest_p.h"
#include "resetservicesettingrequest.h"

namespace QtAws {
namespace Ssm {

class ResetServiceSettingRequest;

class ResetServiceSettingRequestPrivate : public SsmRequestPrivate {

public:
    ResetServiceSettingRequestPrivate(const SsmRequest::Action action,
                                   ResetServiceSettingRequest * const q);
    ResetServiceSettingRequestPrivate(const ResetServiceSettingRequestPrivate &other,
                                   ResetServiceSettingRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetServiceSettingRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
