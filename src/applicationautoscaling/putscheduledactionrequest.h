// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCHEDULEDACTIONREQUEST_H
#define QTAWS_PUTSCHEDULEDACTIONREQUEST_H

#include "applicationautoscalingrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class PutScheduledActionRequestPrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT PutScheduledActionRequest : public ApplicationAutoScalingRequest {

public:
    PutScheduledActionRequest(const PutScheduledActionRequest &other);
    PutScheduledActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutScheduledActionRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
