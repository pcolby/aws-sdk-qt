// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESHAREDDIRECTORIESRESPONSE_P_H
#define QTAWS_DESCRIBESHAREDDIRECTORIESRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DescribeSharedDirectoriesResponse;

class DescribeSharedDirectoriesResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DescribeSharedDirectoriesResponsePrivate(DescribeSharedDirectoriesResponse * const q);

    void parseDescribeSharedDirectoriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSharedDirectoriesResponse)
    Q_DISABLE_COPY(DescribeSharedDirectoriesResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
