// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOBQUEUEREQUEST_H
#define QTAWS_DELETEJOBQUEUEREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class DeleteJobQueueRequestPrivate;

class QTAWSBATCH_EXPORT DeleteJobQueueRequest : public BatchRequest {

public:
    DeleteJobQueueRequest(const DeleteJobQueueRequest &other);
    DeleteJobQueueRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteJobQueueRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
