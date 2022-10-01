// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEMANAGEDSCALINGPOLICYREQUEST_H
#define QTAWS_REMOVEMANAGEDSCALINGPOLICYREQUEST_H

#include "emrrequest.h"

namespace QtAws {
namespace Emr {

class RemoveManagedScalingPolicyRequestPrivate;

class QTAWSEMR_EXPORT RemoveManagedScalingPolicyRequest : public EmrRequest {

public:
    RemoveManagedScalingPolicyRequest(const RemoveManagedScalingPolicyRequest &other);
    RemoveManagedScalingPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveManagedScalingPolicyRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
