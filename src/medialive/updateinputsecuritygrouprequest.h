// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEINPUTSECURITYGROUPREQUEST_H
#define QTAWS_UPDATEINPUTSECURITYGROUPREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class UpdateInputSecurityGroupRequestPrivate;

class QTAWSMEDIALIVE_EXPORT UpdateInputSecurityGroupRequest : public MediaLiveRequest {

public:
    UpdateInputSecurityGroupRequest(const UpdateInputSecurityGroupRequest &other);
    UpdateInputSecurityGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateInputSecurityGroupRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
