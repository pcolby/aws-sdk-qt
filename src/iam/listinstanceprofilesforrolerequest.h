// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINSTANCEPROFILESFORROLEREQUEST_H
#define QTAWS_LISTINSTANCEPROFILESFORROLEREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class ListInstanceProfilesForRoleRequestPrivate;

class QTAWSIAM_EXPORT ListInstanceProfilesForRoleRequest : public IamRequest {

public:
    ListInstanceProfilesForRoleRequest(const ListInstanceProfilesForRoleRequest &other);
    ListInstanceProfilesForRoleRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListInstanceProfilesForRoleRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
