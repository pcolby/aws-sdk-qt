// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDISCOVERERSREQUEST_H
#define QTAWS_LISTDISCOVERERSREQUEST_H

#include "schemasrequest.h"

namespace QtAws {
namespace Schemas {

class ListDiscoverersRequestPrivate;

class QTAWSSCHEMAS_EXPORT ListDiscoverersRequest : public SchemasRequest {

public:
    ListDiscoverersRequest(const ListDiscoverersRequest &other);
    ListDiscoverersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDiscoverersRequest)

};

} // namespace Schemas
} // namespace QtAws

#endif
