// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKMAILMESSAGEFLOWRESPONSE_H
#define QTAWS_WORKMAILMESSAGEFLOWRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsworkmailmessageflowglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace WorkMailMessageFlow {

class WorkMailMessageFlowResponsePrivate;

class QTAWSWORKMAILMESSAGEFLOW_EXPORT WorkMailMessageFlowResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    WorkMailMessageFlowResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    WorkMailMessageFlowResponse(WorkMailMessageFlowResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WorkMailMessageFlowResponse)
    Q_DISABLE_COPY(WorkMailMessageFlowResponse)

};

} // namespace WorkMailMessageFlow
} // namespace QtAws

#endif
