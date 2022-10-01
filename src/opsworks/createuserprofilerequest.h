// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPROFILEREQUEST_H
#define QTAWS_CREATEUSERPROFILEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class CreateUserProfileRequestPrivate;

class QTAWSOPSWORKS_EXPORT CreateUserProfileRequest : public OpsWorksRequest {

public:
    CreateUserProfileRequest(const CreateUserProfileRequest &other);
    CreateUserProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUserProfileRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
