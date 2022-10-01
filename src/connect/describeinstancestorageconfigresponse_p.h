// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCESTORAGECONFIGRESPONSE_P_H
#define QTAWS_DESCRIBEINSTANCESTORAGECONFIGRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class DescribeInstanceStorageConfigResponse;

class DescribeInstanceStorageConfigResponsePrivate : public ConnectResponsePrivate {

public:

    explicit DescribeInstanceStorageConfigResponsePrivate(DescribeInstanceStorageConfigResponse * const q);

    void parseDescribeInstanceStorageConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceStorageConfigResponse)
    Q_DISABLE_COPY(DescribeInstanceStorageConfigResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
