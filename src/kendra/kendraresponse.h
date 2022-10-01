// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KENDRARESPONSE_H
#define QTAWS_KENDRARESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawskendraglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Kendra {

class KendraResponsePrivate;

class QTAWSKENDRA_EXPORT KendraResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    KendraResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    KendraResponse(KendraResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(KendraResponse)
    Q_DISABLE_COPY(KendraResponse)

};

} // namespace Kendra
} // namespace QtAws

#endif
