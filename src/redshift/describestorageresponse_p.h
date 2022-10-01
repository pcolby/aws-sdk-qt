// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTORAGERESPONSE_P_H
#define QTAWS_DESCRIBESTORAGERESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeStorageResponse;

class DescribeStorageResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeStorageResponsePrivate(DescribeStorageResponse * const q);

    void parseDescribeStorageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeStorageResponse)
    Q_DISABLE_COPY(DescribeStorageResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
