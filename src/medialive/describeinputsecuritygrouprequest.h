// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTSECURITYGROUPREQUEST_H
#define QTAWS_DESCRIBEINPUTSECURITYGROUPREQUEST_H

#include "medialiverequest.h"

namespace QtAws {
namespace MediaLive {

class DescribeInputSecurityGroupRequestPrivate;

class QTAWSMEDIALIVE_EXPORT DescribeInputSecurityGroupRequest : public MediaLiveRequest {

public:
    DescribeInputSecurityGroupRequest(const DescribeInputSecurityGroupRequest &other);
    DescribeInputSecurityGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInputSecurityGroupRequest)

};

} // namespace MediaLive
} // namespace QtAws

#endif
