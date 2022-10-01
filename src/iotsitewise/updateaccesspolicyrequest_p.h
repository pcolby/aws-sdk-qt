// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEACCESSPOLICYREQUEST_P_H
#define QTAWS_UPDATEACCESSPOLICYREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "updateaccesspolicyrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class UpdateAccessPolicyRequest;

class UpdateAccessPolicyRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    UpdateAccessPolicyRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   UpdateAccessPolicyRequest * const q);
    UpdateAccessPolicyRequestPrivate(const UpdateAccessPolicyRequestPrivate &other,
                                   UpdateAccessPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAccessPolicyRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
