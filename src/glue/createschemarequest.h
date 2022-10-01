// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEMAREQUEST_H
#define QTAWS_CREATESCHEMAREQUEST_H

#include "gluerequest.h"

namespace QtAws {
namespace Glue {

class CreateSchemaRequestPrivate;

class QTAWSGLUE_EXPORT CreateSchemaRequest : public GlueRequest {

public:
    CreateSchemaRequest(const CreateSchemaRequest &other);
    CreateSchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSchemaRequest)

};

} // namespace Glue
} // namespace QtAws

#endif
