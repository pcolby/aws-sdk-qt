// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULINGPOLICYREQUEST_H
#define QTAWS_CREATESCHEDULINGPOLICYREQUEST_H

#include "batchrequest.h"

namespace QtAws {
namespace Batch {

class CreateSchedulingPolicyRequestPrivate;

class QTAWSBATCH_EXPORT CreateSchedulingPolicyRequest : public BatchRequest {

public:
    CreateSchedulingPolicyRequest(const CreateSchedulingPolicyRequest &other);
    CreateSchedulingPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSchedulingPolicyRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
