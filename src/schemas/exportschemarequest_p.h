// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTSCHEMAREQUEST_P_H
#define QTAWS_EXPORTSCHEMAREQUEST_P_H

#include "schemasrequest_p.h"
#include "exportschemarequest.h"

namespace QtAws {
namespace Schemas {

class ExportSchemaRequest;

class ExportSchemaRequestPrivate : public SchemasRequestPrivate {

public:
    ExportSchemaRequestPrivate(const SchemasRequest::Action action,
                                   ExportSchemaRequest * const q);
    ExportSchemaRequestPrivate(const ExportSchemaRequestPrivate &other,
                                   ExportSchemaRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExportSchemaRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
