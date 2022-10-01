// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTOSCALINGRESPONSE_H
#define QTAWS_AUTOSCALINGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsautoscalingglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace AutoScaling {

class AutoScalingResponsePrivate;

class QTAWSAUTOSCALING_EXPORT AutoScalingResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AutoScalingResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AutoScalingResponse(AutoScalingResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AutoScalingResponse)
    Q_DISABLE_COPY(AutoScalingResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
