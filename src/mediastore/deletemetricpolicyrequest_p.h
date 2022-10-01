// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETRICPOLICYREQUEST_P_H
#define QTAWS_DELETEMETRICPOLICYREQUEST_P_H

#include "mediastorerequest_p.h"
#include "deletemetricpolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class DeleteMetricPolicyRequest;

class DeleteMetricPolicyRequestPrivate : public MediaStoreRequestPrivate {

public:
    DeleteMetricPolicyRequestPrivate(const MediaStoreRequest::Action action,
                                   DeleteMetricPolicyRequest * const q);
    DeleteMetricPolicyRequestPrivate(const DeleteMetricPolicyRequestPrivate &other,
                                   DeleteMetricPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteMetricPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
