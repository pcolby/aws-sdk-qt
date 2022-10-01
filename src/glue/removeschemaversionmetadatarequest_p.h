// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVESCHEMAVERSIONMETADATAREQUEST_P_H
#define QTAWS_REMOVESCHEMAVERSIONMETADATAREQUEST_P_H

#include "gluerequest_p.h"
#include "removeschemaversionmetadatarequest.h"

namespace QtAws {
namespace Glue {

class RemoveSchemaVersionMetadataRequest;

class RemoveSchemaVersionMetadataRequestPrivate : public GlueRequestPrivate {

public:
    RemoveSchemaVersionMetadataRequestPrivate(const GlueRequest::Action action,
                                   RemoveSchemaVersionMetadataRequest * const q);
    RemoveSchemaVersionMetadataRequestPrivate(const RemoveSchemaVersionMetadataRequestPrivate &other,
                                   RemoveSchemaVersionMetadataRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveSchemaVersionMetadataRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
