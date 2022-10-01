// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMETRICPOLICYREQUEST_P_H
#define QTAWS_GETMETRICPOLICYREQUEST_P_H

#include "mediastorerequest_p.h"
#include "getmetricpolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class GetMetricPolicyRequest;

class GetMetricPolicyRequestPrivate : public MediaStoreRequestPrivate {

public:
    GetMetricPolicyRequestPrivate(const MediaStoreRequest::Action action,
                                   GetMetricPolicyRequest * const q);
    GetMetricPolicyRequestPrivate(const GetMetricPolicyRequestPrivate &other,
                                   GetMetricPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetMetricPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
