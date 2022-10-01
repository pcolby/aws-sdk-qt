// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICESETTINGREQUEST_P_H
#define QTAWS_UPDATESERVICESETTINGREQUEST_P_H

#include "ssmrequest_p.h"
#include "updateservicesettingrequest.h"

namespace QtAws {
namespace Ssm {

class UpdateServiceSettingRequest;

class UpdateServiceSettingRequestPrivate : public SsmRequestPrivate {

public:
    UpdateServiceSettingRequestPrivate(const SsmRequest::Action action,
                                   UpdateServiceSettingRequest * const q);
    UpdateServiceSettingRequestPrivate(const UpdateServiceSettingRequestPrivate &other,
                                   UpdateServiceSettingRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServiceSettingRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
