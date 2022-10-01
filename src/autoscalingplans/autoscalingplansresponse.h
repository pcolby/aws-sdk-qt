// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTOSCALINGPLANSRESPONSE_H
#define QTAWS_AUTOSCALINGPLANSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsautoscalingplansglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace AutoScalingPlans {

class AutoScalingPlansResponsePrivate;

class QTAWSAUTOSCALINGPLANS_EXPORT AutoScalingPlansResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AutoScalingPlansResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AutoScalingPlansResponse(AutoScalingPlansResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AutoScalingPlansResponse)
    Q_DISABLE_COPY(AutoScalingPlansResponse)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
