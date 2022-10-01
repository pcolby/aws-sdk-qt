// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEMAREQUEST_H
#define QTAWS_DELETESCHEMAREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class DeleteSchemaRequestPrivate;

class QTAWSSCHEMAS_EXPORT DeleteSchemaRequest : public SchemasRequest {

public:
    DeleteSchemaRequest(const DeleteSchemaRequest &other);
    DeleteSchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSchemaRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
