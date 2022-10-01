// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPFLOWRESPONSE_H
#define QTAWS_APPFLOWRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsappflowglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Appflow {

class AppflowResponsePrivate;

class QTAWSAPPFLOW_EXPORT AppflowResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    AppflowResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    AppflowResponse(AppflowResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AppflowResponse)
    Q_DISABLE_COPY(AppflowResponse)

};

} // namespace Appflow
} // namespace QtAws

#endif
