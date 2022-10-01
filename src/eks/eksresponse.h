// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EKSRESPONSE_H
#define QTAWS_EKSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawseksglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Eks {

class EksResponsePrivate;

class QTAWSEKS_EXPORT EksResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    EksResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    EksResponse(EksResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EksResponse)
    Q_DISABLE_COPY(EksResponse)

};

} // namespace Eks
} // namespace QtAws

#endif
