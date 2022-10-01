// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLUERESPONSE_H
#define QTAWS_GLUERESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsglueglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Glue {

class GlueResponsePrivate;

class QTAWSGLUE_EXPORT GlueResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    GlueResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    GlueResponse(GlueResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GlueResponse)
    Q_DISABLE_COPY(GlueResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
