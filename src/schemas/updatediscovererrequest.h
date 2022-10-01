// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDISCOVERERREQUEST_H
#define QTAWS_UPDATEDISCOVERERREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class UpdateDiscovererRequestPrivate;

class QTAWSSCHEMAS_EXPORT UpdateDiscovererRequest : public SchemasRequest {

public:
    UpdateDiscovererRequest(const UpdateDiscovererRequest &other);
    UpdateDiscovererRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDiscovererRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
