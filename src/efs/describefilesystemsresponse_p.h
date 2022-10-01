// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMSRESPONSE_P_H
#define QTAWS_DESCRIBEFILESYSTEMSRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class DescribeFileSystemsResponse;

class DescribeFileSystemsResponsePrivate : public EfsResponsePrivate {

public:

    explicit DescribeFileSystemsResponsePrivate(DescribeFileSystemsResponse * const q);

    void parseDescribeFileSystemsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFileSystemsResponse)
    Q_DISABLE_COPY(DescribeFileSystemsResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
