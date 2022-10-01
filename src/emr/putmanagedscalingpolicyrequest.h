// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMANAGEDSCALINGPOLICYREQUEST_H
#define QTAWS_PUTMANAGEDSCALINGPOLICYREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class PutManagedScalingPolicyRequestPrivate;

class QTAWSEMR_EXPORT PutManagedScalingPolicyRequest : public EmrRequest {

public:
    PutManagedScalingPolicyRequest(const PutManagedScalingPolicyRequest &other);
    PutManagedScalingPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutManagedScalingPolicyRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
