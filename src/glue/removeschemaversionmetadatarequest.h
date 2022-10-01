// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVESCHEMAVERSIONMETADATAREQUEST_H
#define QTAWS_REMOVESCHEMAVERSIONMETADATAREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class RemoveSchemaVersionMetadataRequestPrivate;

class QTAWSGLUE_EXPORT RemoveSchemaVersionMetadataRequest : public GlueRequest {

public:
    RemoveSchemaVersionMetadataRequest(const RemoveSchemaVersionMetadataRequest &other);
    RemoveSchemaVersionMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveSchemaVersionMetadataRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
