// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDUSERTOGROUPREQUEST_H
#define QTAWS_ADDUSERTOGROUPREQUEST_H

#include "iamrequest.h"

namespace QtAws {
namespace Iam {

class AddUserToGroupRequestPrivate;

class QTAWSIAM_EXPORT AddUserToGroupRequest : public IamRequest {

public:
    AddUserToGroupRequest(const AddUserToGroupRequest &other);
    AddUserToGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddUserToGroupRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
