// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTWARMPOOLREQUEST_H
#define QTAWS_PUTWARMPOOLREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class PutWarmPoolRequestPrivate;

class QTAWSAUTOSCALING_EXPORT PutWarmPoolRequest : public AutoScalingRequest {

public:
    PutWarmPoolRequest(const PutWarmPoolRequest &other);
    PutWarmPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutWarmPoolRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
