// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOBJECTRESPONSE_P_H
#define QTAWS_DESCRIBEOBJECTRESPONSE_P_H

#include "mediastoredataresponse_p.h"

namespace QtAws {
namespace MediaStoreData {

class DescribeObjectResponse;

class DescribeObjectResponsePrivate : public MediaStoreDataResponsePrivate {

public:

    explicit DescribeObjectResponsePrivate(DescribeObjectResponse * const q);

    void parseDescribeObjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeObjectResponse)
    Q_DISABLE_COPY(DescribeObjectResponsePrivate)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
