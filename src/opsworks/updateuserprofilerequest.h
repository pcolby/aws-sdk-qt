// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPROFILEREQUEST_H
#define QTAWS_UPDATEUSERPROFILEREQUEST_H

#include "opsworksrequest.h"

namespace QtAws {
namespace OpsWorks {

class UpdateUserProfileRequestPrivate;

class QTAWSOPSWORKS_EXPORT UpdateUserProfileRequest : public OpsWorksRequest {

public:
    UpdateUserProfileRequest(const UpdateUserProfileRequest &other);
    UpdateUserProfileRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserProfileRequest)

};

} // namespace OpsWorks
} // namespace QtAws

#endif
