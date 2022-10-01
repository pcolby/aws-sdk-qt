// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEMAVERSIONREQUEST_H
#define QTAWS_DELETESCHEMAVERSIONREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class DeleteSchemaVersionRequestPrivate;

class QTAWSSCHEMAS_EXPORT DeleteSchemaVersionRequest : public SchemasRequest {

public:
    DeleteSchemaVersionRequest(const DeleteSchemaVersionRequest &other);
    DeleteSchemaVersionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSchemaVersionRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
