// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERECORDREQUEST_P_H
#define QTAWS_DELETERECORDREQUEST_P_H

#include "sagemakerfeaturestoreruntimerequest_p.h"
#include "deleterecordrequest.h"

namespace QtAws {
namespace SageMakerFeatureStoreRuntime {

class DeleteRecordRequest;

class DeleteRecordRequestPrivate : public SageMakerFeatureStoreRuntimeRequestPrivate {

public:
    DeleteRecordRequestPrivate(const SageMakerFeatureStoreRuntimeRequest::Action action,
                                   DeleteRecordRequest * const q);
    DeleteRecordRequestPrivate(const DeleteRecordRequestPrivate &other,
                                   DeleteRecordRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRecordRequest)

};

} // namespace SageMakerFeatureStoreRuntime
} // namespace QtAws

#endif
