// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FINSPACEDATARESPONSE_H
#define QTAWS_FINSPACEDATARESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsfinspacedataglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace FinspaceData {

class FinspaceDataResponsePrivate;

class QTAWSFINSPACEDATA_EXPORT FinspaceDataResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    FinspaceDataResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    FinspaceDataResponse(FinspaceDataResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FinspaceDataResponse)
    Q_DISABLE_COPY(FinspaceDataResponse)

};

} // namespace FinspaceData
} // namespace QtAws

#endif
