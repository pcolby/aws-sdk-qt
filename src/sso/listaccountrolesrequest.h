// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTROLESREQUEST_H
#define QTAWS_LISTACCOUNTROLESREQUEST_H

#include "ssorequest.h"

namespace QtAws {
namespace Sso {

class ListAccountRolesRequestPrivate;

class QTAWSSSO_EXPORT ListAccountRolesRequest : public SsoRequest {

public:
    ListAccountRolesRequest(const ListAccountRolesRequest &other);
    ListAccountRolesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountRolesRequest)

};

} // namespace Sso
} // namespace QtAws

#endif
