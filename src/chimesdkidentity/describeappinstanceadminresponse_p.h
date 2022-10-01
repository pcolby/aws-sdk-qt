// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEADMINRESPONSE_P_H
#define QTAWS_DESCRIBEAPPINSTANCEADMINRESPONSE_P_H

#include "chimesdkidentityresponse_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DescribeAppInstanceAdminResponse;

class DescribeAppInstanceAdminResponsePrivate : public ChimeSdkIdentityResponsePrivate {

public:

    explicit DescribeAppInstanceAdminResponsePrivate(DescribeAppInstanceAdminResponse * const q);

    void parseDescribeAppInstanceAdminResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAppInstanceAdminResponse)
    Q_DISABLE_COPY(DescribeAppInstanceAdminResponsePrivate)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
