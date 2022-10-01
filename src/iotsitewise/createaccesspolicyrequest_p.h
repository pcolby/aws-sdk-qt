// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCESSPOLICYREQUEST_P_H
#define QTAWS_CREATEACCESSPOLICYREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "createaccesspolicyrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class CreateAccessPolicyRequest;

class CreateAccessPolicyRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    CreateAccessPolicyRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   CreateAccessPolicyRequest * const q);
    CreateAccessPolicyRequestPrivate(const CreateAccessPolicyRequestPrivate &other,
                                   CreateAccessPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAccessPolicyRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
