// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTORIESRESPONSE_P_H
#define QTAWS_DESCRIBEDIRECTORIESRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DescribeDirectoriesResponse;

class DescribeDirectoriesResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DescribeDirectoriesResponsePrivate(DescribeDirectoriesResponse * const q);

    void parseDescribeDirectoriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDirectoriesResponse)
    Q_DISABLE_COPY(DescribeDirectoriesResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
