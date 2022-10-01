// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERHIERARCHYGROUPREQUEST_H
#define QTAWS_CREATEUSERHIERARCHYGROUPREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class CreateUserHierarchyGroupRequestPrivate;

class QTAWSCONNECT_EXPORT CreateUserHierarchyGroupRequest : public ConnectRequest {

public:
    CreateUserHierarchyGroupRequest(const CreateUserHierarchyGroupRequest &other);
    CreateUserHierarchyGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserHierarchyGroupRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
