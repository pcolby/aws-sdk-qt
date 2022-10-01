// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUD9RESPONSE_H
#define QTAWS_CLOUD9RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawscloud9global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Cloud9 {

class Cloud9ResponsePrivate;

class QTAWSCLOUD9_EXPORT Cloud9Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    Cloud9Response(QObject * const parent = 0);

protected:
    /// @cond internal
    Cloud9Response(Cloud9ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Cloud9Response)
    Q_DISABLE_COPY(Cloud9Response)

};

} // namespace Cloud9
} // namespace QtAws

#endif
