// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DAXRESPONSE_H
#define QTAWS_DAXRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsdaxglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Dax {

class DaxResponsePrivate;

class QTAWSDAX_EXPORT DaxResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    DaxResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    DaxResponse(DaxResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DaxResponse)
    Q_DISABLE_COPY(DaxResponse)

};

} // namespace Dax
} // namespace QtAws

#endif
