// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSMRESPONSE_H
#define QTAWS_SSMRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsssmglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Ssm {

class SsmResponsePrivate;

class QTAWSSSM_EXPORT SsmResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SsmResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SsmResponse(SsmResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SsmResponse)
    Q_DISABLE_COPY(SsmResponse)

};

} // namespace Ssm
} // namespace QtAws

#endif
