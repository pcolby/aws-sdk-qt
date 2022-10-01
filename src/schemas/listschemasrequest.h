// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSCHEMASREQUEST_H
#define QTAWS_LISTSCHEMASREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class ListSchemasRequestPrivate;

class QTAWSSCHEMAS_EXPORT ListSchemasRequest : public SchemasRequest {

public:
    ListSchemasRequest(const ListSchemasRequest &other);
    ListSchemasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSchemasRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
