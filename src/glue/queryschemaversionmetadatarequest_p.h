// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QUERYSCHEMAVERSIONMETADATAREQUEST_P_H
#define QTAWS_QUERYSCHEMAVERSIONMETADATAREQUEST_P_H

#include "gluerequest_p.h"
#include "queryschemaversionmetadatarequest.h"

namespace QtAws {
namespace Glue {

class QuerySchemaVersionMetadataRequest;

class QuerySchemaVersionMetadataRequestPrivate : public GlueRequestPrivate {

public:
    QuerySchemaVersionMetadataRequestPrivate(const GlueRequest::Action action,
                                   QuerySchemaVersionMetadataRequest * const q);
    QuerySchemaVersionMetadataRequestPrivate(const QuerySchemaVersionMetadataRequestPrivate &other,
                                   QuerySchemaVersionMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(QuerySchemaVersionMetadataRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
