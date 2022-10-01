// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENVIRONMENTMEMBERSHIPREQUEST_H
#define QTAWS_DELETEENVIRONMENTMEMBERSHIPREQUEST_H

#include "cloud9request.h"

namespace QtAws {
namespace Cloud9 {

class DeleteEnvironmentMembershipRequestPrivate;

class QTAWSCLOUD9_EXPORT DeleteEnvironmentMembershipRequest : public Cloud9Request {

public:
    DeleteEnvironmentMembershipRequest(const DeleteEnvironmentMembershipRequest &other);
    DeleteEnvironmentMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEnvironmentMembershipRequest)

};

} // namespace Cloud9
} // namespace QtAws

#endif
