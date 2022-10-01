// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCHEMAVERSIONMETADATAREQUEST_P_H
#define QTAWS_PUTSCHEMAVERSIONMETADATAREQUEST_P_H

#include "gluerequest_p.h"
#include "putschemaversionmetadatarequest.h"

namespace QtAws {
namespace Glue {

class PutSchemaVersionMetadataRequest;

class PutSchemaVersionMetadataRequestPrivate : public GlueRequestPrivate {

public:
    PutSchemaVersionMetadataRequestPrivate(const GlueRequest::Action action,
                                   PutSchemaVersionMetadataRequest * const q);
    PutSchemaVersionMetadataRequestPrivate(const PutSchemaVersionMetadataRequestPrivate &other,
                                   PutSchemaVersionMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutSchemaVersionMetadataRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
