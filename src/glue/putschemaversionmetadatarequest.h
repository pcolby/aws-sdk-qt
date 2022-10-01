// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCHEMAVERSIONMETADATAREQUEST_H
#define QTAWS_PUTSCHEMAVERSIONMETADATAREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class PutSchemaVersionMetadataRequestPrivate;

class QTAWSGLUE_EXPORT PutSchemaVersionMetadataRequest : public GlueRequest {

public:
    PutSchemaVersionMetadataRequest(const PutSchemaVersionMetadataRequest &other);
    PutSchemaVersionMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutSchemaVersionMetadataRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
