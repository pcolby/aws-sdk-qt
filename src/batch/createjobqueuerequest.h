// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOBQUEUEREQUEST_H
#define QTAWS_CREATEJOBQUEUEREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class CreateJobQueueRequestPrivate;

class QTAWSBATCH_EXPORT CreateJobQueueRequest : public BatchRequest {

public:
    CreateJobQueueRequest(const CreateJobQueueRequest &other);
    CreateJobQueueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateJobQueueRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
