// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGISTRYREQUEST_H
#define QTAWS_UPDATEREGISTRYREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class UpdateRegistryRequestPrivate;

class QTAWSSCHEMAS_EXPORT UpdateRegistryRequest : public SchemasRequest {

public:
    UpdateRegistryRequest(const UpdateRegistryRequest &other);
    UpdateRegistryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRegistryRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
