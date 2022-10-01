// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDISCOVERERREQUEST_H
#define QTAWS_CREATEDISCOVERERREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class CreateDiscovererRequestPrivate;

class QTAWSSCHEMAS_EXPORT CreateDiscovererRequest : public SchemasRequest {

public:
    CreateDiscovererRequest(const CreateDiscovererRequest &other);
    CreateDiscovererRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDiscovererRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
