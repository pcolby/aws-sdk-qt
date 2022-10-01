// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEMAVERSIONSREQUEST_H
#define QTAWS_LISTSCHEMAVERSIONSREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class ListSchemaVersionsRequestPrivate;

class QTAWSSCHEMAS_EXPORT ListSchemaVersionsRequest : public SchemasRequest {

public:
    ListSchemaVersionsRequest(const ListSchemaVersionsRequest &other);
    ListSchemaVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSchemaVersionsRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
