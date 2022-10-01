// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IAMRESPONSE_H
#define QTAWS_IAMRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsiamglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Iam {

class IamResponsePrivate;

class QTAWSIAM_EXPORT IamResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    IamResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    IamResponse(IamResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IamResponse)
    Q_DISABLE_COPY(IamResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
