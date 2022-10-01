// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TRANSFERRESPONSE_H
#define QTAWS_TRANSFERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawstransferglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Transfer {

class TransferResponsePrivate;

class QTAWSTRANSFER_EXPORT TransferResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    TransferResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    TransferResponse(TransferResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TransferResponse)
    Q_DISABLE_COPY(TransferResponse)

};

} // namespace Transfer
} // namespace QtAws

#endif
