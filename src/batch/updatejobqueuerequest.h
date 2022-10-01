// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOBQUEUEREQUEST_H
#define QTAWS_UPDATEJOBQUEUEREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class UpdateJobQueueRequestPrivate;

class QTAWSBATCH_EXPORT UpdateJobQueueRequest : public BatchRequest {

public:
    UpdateJobQueueRequest(const UpdateJobQueueRequest &other);
    UpdateJobQueueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateJobQueueRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
