// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SCHEMASRESPONSE_H
#define QTAWS_SCHEMASRESPONSE_H

#include "core/awsabstractresponse.h"

#include "qtawsschemasglobal.h"
//#include "@todo-error.h"

namespace QtAws {
namespace Schemas {

class SchemasResponsePrivate;

class QTAWSSCHEMAS_EXPORT SchemasResponse : public QtAws::Core::AwsAbstractResponse {
    Q_OBJECT

public:
    SchemasResponse(QObject * const parent = 0);

protected:
    /// @cond internal
    SchemasResponse(SchemasResponsePrivate * const d, QObject * const parent);
    /// @endcond

protected slots:
    virtual void parseFailure(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SchemasResponse)
    Q_DISABLE_COPY(SchemasResponse)

};

} // namespace Schemas
} // namespace QtAws

#endif
