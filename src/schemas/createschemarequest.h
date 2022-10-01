// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEMAREQUEST_H
#define QTAWS_CREATESCHEMAREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class CreateSchemaRequestPrivate;

class QTAWSSCHEMAS_EXPORT CreateSchemaRequest : public SchemasRequest {

public:
    CreateSchemaRequest(const CreateSchemaRequest &other);
    CreateSchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSchemaRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
