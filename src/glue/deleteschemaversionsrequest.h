// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEMAVERSIONSREQUEST_H
#define QTAWS_DELETESCHEMAVERSIONSREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class DeleteSchemaVersionsRequestPrivate;

class QTAWSGLUE_EXPORT DeleteSchemaVersionsRequest : public GlueRequest {

public:
    DeleteSchemaVersionsRequest(const DeleteSchemaVersionsRequest &other);
    DeleteSchemaVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSchemaVersionsRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
