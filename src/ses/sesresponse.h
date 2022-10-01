// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SESRESPONSE_H
#define QTAWS_SESRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawssesglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Ses {

class SesResponsePrivate;

class QTAWSSES_EXPORT SesResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SesResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SesResponse(SesResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SesResponse)
    Q_DISABLE_COPY(SesResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
