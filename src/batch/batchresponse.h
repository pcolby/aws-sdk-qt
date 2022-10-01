// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHRESPONSE_H
#define QTAWS_BATCHRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsbatchglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Batch {

class BatchResponsePrivate;

class QTAWSBATCH_EXPORT BatchResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    BatchResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    BatchResponse(BatchResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchResponse)
    Q_DISABLE_COPY(BatchResponse)

};

} // namespace Batch
} // namespace QtAws

#endif
