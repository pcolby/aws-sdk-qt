// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCESSPOLICYREQUEST_P_H
#define QTAWS_DELETEACCESSPOLICYREQUEST_P_H

#include "iotsitewiserequest_p.h"
#include "deleteaccesspolicyrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DeleteAccessPolicyRequest;

class DeleteAccessPolicyRequestPrivate : public IoTSiteWiseRequestPrivate {

public:
    DeleteAccessPolicyRequestPrivate(const IoTSiteWiseRequest::Action action,
                                   DeleteAccessPolicyRequest * const q);
    DeleteAccessPolicyRequestPrivate(const DeleteAccessPolicyRequestPrivate &other,
                                   DeleteAccessPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccessPolicyRequest)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
