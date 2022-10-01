// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKINGSTORAGERESPONSE_P_H
#define QTAWS_DESCRIBEWORKINGSTORAGERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DescribeWorkingStorageResponse;

class DescribeWorkingStorageResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DescribeWorkingStorageResponsePrivate(DescribeWorkingStorageResponse * const q);

    void parseDescribeWorkingStorageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorkingStorageResponse)
    Q_DISABLE_COPY(DescribeWorkingStorageResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
