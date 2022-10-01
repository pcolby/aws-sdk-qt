// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXPORTSCHEMAREQUEST_H
#define QTAWS_EXPORTSCHEMAREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class ExportSchemaRequestPrivate;

class QTAWSSCHEMAS_EXPORT ExportSchemaRequest : public SchemasRequest {

public:
    ExportSchemaRequest(const ExportSchemaRequest &other);
    ExportSchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExportSchemaRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
