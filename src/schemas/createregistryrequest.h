// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGISTRYREQUEST_H
#define QTAWS_CREATEREGISTRYREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class CreateRegistryRequestPrivate;

class QTAWSSCHEMAS_EXPORT CreateRegistryRequest : public SchemasRequest {

public:
    CreateRegistryRequest(const CreateRegistryRequest &other);
    CreateRegistryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRegistryRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
