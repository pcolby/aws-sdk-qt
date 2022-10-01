// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEMAREQUEST_H
#define QTAWS_UPDATESCHEMAREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class UpdateSchemaRequestPrivate;

class QTAWSSCHEMAS_EXPORT UpdateSchemaRequest : public SchemasRequest {

public:
    UpdateSchemaRequest(const UpdateSchemaRequest &other);
    UpdateSchemaRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSchemaRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
