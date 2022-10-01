// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COSTEXPLORERRESPONSE_H
#define QTAWS_COSTEXPLORERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscostexplorerglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace CostExplorer {

class CostExplorerResponsePrivate;

class QTAWSCOSTEXPLORER_EXPORT CostExplorerResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    CostExplorerResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    CostExplorerResponse(CostExplorerResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CostExplorerResponse)
    Q_DISABLE_COPY(CostExplorerResponse)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
