// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEUSERENDPOINTRESPONSE_P_H
#define QTAWS_DESCRIBEAPPINSTANCEUSERENDPOINTRESPONSE_P_H

#include "chimesdkidentityresponse_p.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DescribeAppInstanceUserEndpointResponse;

class DescribeAppInstanceUserEndpointResponsePrivate : public ChimeSdkIdentityResponsePrivate {

public:

    explicit DescribeAppInstanceUserEndpointResponsePrivate(DescribeAppInstanceUserEndpointResponse * const q);

    void parseDescribeAppInstanceUserEndpointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAppInstanceUserEndpointResponse)
    Q_DISABLE_COPY(DescribeAppInstanceUserEndpointResponsePrivate)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
