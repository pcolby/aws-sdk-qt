// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINPUTSECURITYGROUPREQUEST_H
#define QTAWS_DELETEINPUTSECURITYGROUPREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class DeleteInputSecurityGroupRequestPrivate;

class QTAWSMEDIALIVE_EXPORT DeleteInputSecurityGroupRequest : public MediaLiveRequest {

public:
    DeleteInputSecurityGroupRequest(const DeleteInputSecurityGroupRequest &other);
    DeleteInputSecurityGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInputSecurityGroupRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
