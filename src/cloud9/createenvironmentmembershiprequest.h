// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENVIRONMENTMEMBERSHIPREQUEST_H
#define QTAWS_CREATEENVIRONMENTMEMBERSHIPREQUEST_H

#include "cloud9request.h"

namespace QtAws {
namespace Cloud9 {

class CreateEnvironmentMembershipRequestPrivate;

class QTAWSCLOUD9_EXPORT CreateEnvironmentMembershipRequest : public Cloud9Request {

public:
    CreateEnvironmentMembershipRequest(const CreateEnvironmentMembershipRequest &other);
    CreateEnvironmentMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEnvironmentMembershipRequest)

};

} // namespace Cloud9
} // namespace QtAws

#endif
