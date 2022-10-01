// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SNSRESPONSE_H
#define QTAWS_SNSRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssnsglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Sns {

class SnsResponsePrivate;

class QTAWSSNS_EXPORT SnsResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SnsResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SnsResponse(SnsResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SnsResponse)
    Q_DISABLE_COPY(SnsResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
