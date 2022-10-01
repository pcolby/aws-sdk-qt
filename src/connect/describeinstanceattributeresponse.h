// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEATTRIBUTERESPONSE_H
#define QTAWS_DESCRIBEINSTANCEATTRIBUTERESPONSE_H

#include "connectresponse.h"
#include "describeinstanceattributerequest.h"

namespace QtAws {
namespace Connect {

class DescribeInstanceAttributeResponsePrivate;

class QTAWSCONNECT_EXPORT DescribeInstanceAttributeResponse : public ConnectResponse {
    Q_OBJECT

public:
    DescribeInstanceAttributeResponse(const DescribeInstanceAttributeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstanceAttributeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceAttributeResponse)
    Q_DISABLE_COPY(DescribeInstanceAttributeResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
