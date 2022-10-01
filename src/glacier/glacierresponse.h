// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLACIERRESPONSE_H
#define QTAWS_GLACIERRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsglacierglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Glacier {

class GlacierResponsePrivate;

class QTAWSGLACIER_EXPORT GlacierResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    GlacierResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    GlacierResponse(GlacierResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GlacierResponse)
    Q_DISABLE_COPY(GlacierResponse)

};

} // namespace Glacier
} // namespace QtAws

#endif
