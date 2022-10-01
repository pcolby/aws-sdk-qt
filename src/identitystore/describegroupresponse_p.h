// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPRESPONSE_P_H
#define QTAWS_DESCRIBEGROUPRESPONSE_P_H

#include "identitystoreresponse_p.h"

namespace QtAws {
namespace IdentityStore {

class DescribeGroupResponse;

class DescribeGroupResponsePrivate : public IdentityStoreResponsePrivate {

public:

    explicit DescribeGroupResponsePrivate(DescribeGroupResponse * const q);

    void parseDescribeGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeGroupResponse)
    Q_DISABLE_COPY(DescribeGroupResponsePrivate)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
