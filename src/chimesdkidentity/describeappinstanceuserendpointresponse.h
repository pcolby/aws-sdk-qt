// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEUSERENDPOINTRESPONSE_H
#define QTAWS_DESCRIBEAPPINSTANCEUSERENDPOINTRESPONSE_H

#include "chimesdkidentityresponse.h"
#include "describeappinstanceuserendpointrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DescribeAppInstanceUserEndpointResponsePrivate;

class QTAWSCHIMESDKIDENTITY_EXPORT DescribeAppInstanceUserEndpointResponse : public ChimeSdkIdentityResponse {
    Q_OBJECT

public:
    DescribeAppInstanceUserEndpointResponse(const DescribeAppInstanceUserEndpointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAppInstanceUserEndpointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppInstanceUserEndpointResponse)
    Q_DISABLE_COPY(DescribeAppInstanceUserEndpointResponse)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
