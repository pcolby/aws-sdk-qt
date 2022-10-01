// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICPOLICYREQUEST_P_H
#define QTAWS_PUTMETRICPOLICYREQUEST_P_H

#include "mediastorerequest_p.h"
#include "putmetricpolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class PutMetricPolicyRequest;

class PutMetricPolicyRequestPrivate : public MediaStoreRequestPrivate {

public:
    PutMetricPolicyRequestPrivate(const MediaStoreRequest::Action action,
                                   PutMetricPolicyRequest * const q);
    PutMetricPolicyRequestPrivate(const PutMetricPolicyRequestPrivate &other,
                                   PutMetricPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutMetricPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
