// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEDULINGPOLICYREQUEST_H
#define QTAWS_UPDATESCHEDULINGPOLICYREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class UpdateSchedulingPolicyRequestPrivate;

class QTAWSBATCH_EXPORT UpdateSchedulingPolicyRequest : public BatchRequest {

public:
    UpdateSchedulingPolicyRequest(const UpdateSchedulingPolicyRequest &other);
    UpdateSchedulingPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSchedulingPolicyRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
