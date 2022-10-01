// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPERMISSIONVERSIONSREQUEST_H
#define QTAWS_LISTPERMISSIONVERSIONSREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class ListPermissionVersionsRequestPrivate;

class QTAWSRAM_EXPORT ListPermissionVersionsRequest : public RamRequest {

public:
    ListPermissionVersionsRequest(const ListPermissionVersionsRequest &other);
    ListPermissionVersionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPermissionVersionsRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
