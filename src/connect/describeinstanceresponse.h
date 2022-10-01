// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCERESPONSE_H
#define QTAWS_DESCRIBEINSTANCERESPONSE_H

#include "connectresponse.h"
#include "describeinstancerequest.h"

namespace QtAws {
namespace Connect {

class DescribeInstanceResponsePrivate;

class QTAWSCONNECT_EXPORT DescribeInstanceResponse : public ConnectResponse {
    Q_OBJECT

public:
    DescribeInstanceResponse(const DescribeInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceResponse)
    Q_DISABLE_COPY(DescribeInstanceResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
