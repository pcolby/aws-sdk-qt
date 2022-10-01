// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENVIRONMENTMEMBERSHIPREQUEST_H
#define QTAWS_UPDATEENVIRONMENTMEMBERSHIPREQUEST_H

#include "cloud9request.h"

namespace QtAws {
namespace Cloud9 {

class UpdateEnvironmentMembershipRequestPrivate;

class QTAWSCLOUD9_EXPORT UpdateEnvironmentMembershipRequest : public Cloud9Request {

public:
    UpdateEnvironmentMembershipRequest(const UpdateEnvironmentMembershipRequest &other);
    UpdateEnvironmentMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEnvironmentMembershipRequest)

};

} // namespace Cloud9
} // namespace QtAws

#endif
