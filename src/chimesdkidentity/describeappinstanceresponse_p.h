// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCERESPONSE_P_H
#define QTAWS_DESCRIBEAPPINSTANCERESPONSE_P_H

#include "chimesdkidentityresponse_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DescribeAppInstanceResponse;

class DescribeAppInstanceResponsePrivate : public ChimeSdkIdentityResponsePrivate {

public:

    explicit DescribeAppInstanceResponsePrivate(DescribeAppInstanceResponse * const q);

    void parseDescribeAppInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAppInstanceResponse)
    Q_DISABLE_COPY(DescribeAppInstanceResponsePrivate)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
