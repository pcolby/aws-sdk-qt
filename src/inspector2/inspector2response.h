// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INSPECTOR2RESPONSE_H
#define QTAWS_INSPECTOR2RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsinspector2global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Inspector2 {

class Inspector2ResponsePrivate;

class QTAWSINSPECTOR2_EXPORT Inspector2Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    Inspector2Response(QObject * const parent = 0);

protected:
    /// @cond internal
    Inspector2Response(Inspector2ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Inspector2Response)
    Q_DISABLE_COPY(Inspector2Response)

};

} // namespace Inspector2
} // namespace QtAws

#endif
