// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPMEMBERSHIPRESPONSE_P_H
#define QTAWS_DESCRIBEGROUPMEMBERSHIPRESPONSE_P_H

#include "identitystoreresponse_p.h"

namespace QtAws {
namespace IdentityStore {

class DescribeGroupMembershipResponse;

class DescribeGroupMembershipResponsePrivate : public IdentityStoreResponsePrivate {

public:

    explicit DescribeGroupMembershipResponsePrivate(DescribeGroupMembershipResponse * const q);

    void parseDescribeGroupMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGroupMembershipResponse)
    Q_DISABLE_COPY(DescribeGroupMembershipResponsePrivate)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
