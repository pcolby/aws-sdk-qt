// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHSCHEMASREQUEST_P_H
#define QTAWS_SEARCHSCHEMASREQUEST_P_H

#include "schemasrequest_p.h"
#include "searchschemasrequest.h"

namespace QtAws {
namespace Schemas {

class SearchSchemasRequest;

class SearchSchemasRequestPrivate : public SchemasRequestPrivate {

public:
    SearchSchemasRequestPrivate(const SchemasRequest::Action action,
                                   SearchSchemasRequest * const q);
    SearchSchemasRequestPrivate(const SearchSchemasRequestPrivate &other,
                                   SearchSchemasRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchSchemasRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
