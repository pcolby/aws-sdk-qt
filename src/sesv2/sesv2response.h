// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SESV2RESPONSE_H
#define QTAWS_SESV2RESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssesv2global.h"
//#include "@todo-error.h"

namespace QtAws {
namespace SESv2 {

class SESv2ResponsePrivate;

class QTAWSSESV2_EXPORT SESv2Response : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SESv2Response(QObject * const parent = 0);

protected:
    /// @cond internal
    SESv2Response(SESv2ResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SESv2Response)
    Q_DISABLE_COPY(SESv2Response)

};

} // namespace SESv2
} // namespace QtAws

#endif
