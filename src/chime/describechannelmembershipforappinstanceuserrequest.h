// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMEMBERSHIPFORAPPINSTANCEUSERREQUEST_H
#define QTAWS_DESCRIBECHANNELMEMBERSHIPFORAPPINSTANCEUSERREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DescribeChannelMembershipForAppInstanceUserRequestPrivate;

class QTAWSCHIME_EXPORT DescribeChannelMembershipForAppInstanceUserRequest : public ChimeRequest {

public:
    DescribeChannelMembershipForAppInstanceUserRequest(const DescribeChannelMembershipForAppInstanceUserRequest &other);
    DescribeChannelMembershipForAppInstanceUserRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelMembershipForAppInstanceUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
