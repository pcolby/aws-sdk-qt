// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONOBJECTSTORAGERESPONSE_P_H
#define QTAWS_DESCRIBELOCATIONOBJECTSTORAGERESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationObjectStorageResponse;

class DescribeLocationObjectStorageResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit DescribeLocationObjectStorageResponsePrivate(DescribeLocationObjectStorageResponse * const q);

    void parseDescribeLocationObjectStorageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLocationObjectStorageResponse)
    Q_DISABLE_COPY(DescribeLocationObjectStorageResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
