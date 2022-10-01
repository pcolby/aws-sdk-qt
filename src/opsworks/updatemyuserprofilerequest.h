// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMYUSERPROFILEREQUEST_H
#define QTAWS_UPDATEMYUSERPROFILEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateMyUserProfileRequestPrivate;

class QTAWSOPSWORKS_EXPORT UpdateMyUserProfileRequest : public OpsWorksRequest {

public:
    UpdateMyUserProfileRequest(const UpdateMyUserProfileRequest &other);
    UpdateMyUserProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMyUserProfileRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
