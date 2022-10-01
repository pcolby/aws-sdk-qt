// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULINGPOLICYREQUEST_H
#define QTAWS_DELETESCHEDULINGPOLICYREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class DeleteSchedulingPolicyRequestPrivate;

class QTAWSBATCH_EXPORT DeleteSchedulingPolicyRequest : public BatchRequest {

public:
    DeleteSchedulingPolicyRequest(const DeleteSchedulingPolicyRequest &other);
    DeleteSchedulingPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSchedulingPolicyRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
