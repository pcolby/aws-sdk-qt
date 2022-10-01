// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROLESREQUEST_H
#define QTAWS_LISTROLESREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListRolesRequestPrivate;

class QTAWSIAM_EXPORT ListRolesRequest : public IamRequest {

public:
    ListRolesRequest(const ListRolesRequest &other);
    ListRolesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRolesRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
