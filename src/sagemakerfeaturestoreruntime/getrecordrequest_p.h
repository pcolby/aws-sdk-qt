// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRECORDREQUEST_P_H
#define QTAWS_GETRECORDREQUEST_P_H

#include "sagemakerfeaturestoreruntimerequest_p.h"
#include "getrecordrequest.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class GetRecordRequest;

class GetRecordRequestPrivate : public SageMakerFeatureStoreRuntimeRequestPrivate {

public:
    GetRecordRequestPrivate(const SageMakerFeatureStoreRuntimeRequest::Action action,
                                   GetRecordRequest * const q);
    GetRecordRequestPrivate(const GetRecordRequestPrivate &other,
                                   GetRecordRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetRecordRequest)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
