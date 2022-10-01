// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPLICATIONAUTOSCALINGRESPONSE_H
#define QTAWS_APPLICATIONAUTOSCALINGRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsapplicationautoscalingglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class ApplicationAutoScalingResponsePrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT ApplicationAutoScalingResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    ApplicationAutoScalingResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    ApplicationAutoScalingResponse(ApplicationAutoScalingResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApplicationAutoScalingResponse)
    Q_DISABLE_COPY(ApplicationAutoScalingResponse)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
