// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISCOVERERREQUEST_H
#define QTAWS_DELETEDISCOVERERREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class DeleteDiscovererRequestPrivate;

class QTAWSSCHEMAS_EXPORT DeleteDiscovererRequest : public SchemasRequest {

public:
    DeleteDiscovererRequest(const DeleteDiscovererRequest &other);
    DeleteDiscovererRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDiscovererRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
