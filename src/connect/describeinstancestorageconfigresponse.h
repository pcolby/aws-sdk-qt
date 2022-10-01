// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESTORAGECONFIGRESPONSE_H
#define QTAWS_DESCRIBEINSTANCESTORAGECONFIGRESPONSE_H

#include "connectresponse.h"
#include "describeinstancestorageconfigrequest.h"

namespace QtAws {
namespace Connect {

class DescribeInstanceStorageConfigResponsePrivate;

class QTAWSCONNECT_EXPORT DescribeInstanceStorageConfigResponse : public ConnectResponse {
    Q_OBJECT

public:
    DescribeInstanceStorageConfigResponse(const DescribeInstanceStorageConfigRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeInstanceStorageConfigRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeInstanceStorageConfigResponse)
    Q_DISABLE_COPY(DescribeInstanceStorageConfigResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
