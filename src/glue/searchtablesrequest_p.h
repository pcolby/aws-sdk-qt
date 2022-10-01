// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTABLESREQUEST_P_H
#define QTAWS_SEARCHTABLESREQUEST_P_H

#include "gluerequest_p.h"
#include "searchtablesrequest.h"

namespace QtAws {
namespace Glue {

class SearchTablesRequest;

class SearchTablesRequestPrivate : public GlueRequestPrivate {

public:
    SearchTablesRequestPrivate(const GlueRequest::Action action,
                                   SearchTablesRequest * const q);
    SearchTablesRequestPrivate(const SearchTablesRequestPrivate &other,
                                   SearchTablesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchTablesRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
