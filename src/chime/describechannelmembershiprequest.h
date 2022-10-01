// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHANNELMEMBERSHIPREQUEST_H
#define QTAWS_DESCRIBECHANNELMEMBERSHIPREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DescribeChannelMembershipRequestPrivate;

class QTAWSCHIME_EXPORT DescribeChannelMembershipRequest : public ChimeRequest {

public:
    DescribeChannelMembershipRequest(const DescribeChannelMembershipRequest &other);
    DescribeChannelMembershipRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeChannelMembershipRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
