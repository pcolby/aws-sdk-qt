// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSCHEMASREQUEST_H
#define QTAWS_SEARCHSCHEMASREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class SearchSchemasRequestPrivate;

class QTAWSSCHEMAS_EXPORT SearchSchemasRequest : public SchemasRequest {

public:
    SearchSchemasRequest(const SearchSchemasRequest &other);
    SearchSchemasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchSchemasRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
