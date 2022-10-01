// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTTOPICSRESPONSE_P_H
#define QTAWS_DESCRIBEEVENTTOPICSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DescribeEventTopicsResponse;

class DescribeEventTopicsResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DescribeEventTopicsResponsePrivate(DescribeEventTopicsResponse * const q);

    void parseDescribeEventTopicsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEventTopicsResponse)
    Q_DISABLE_COPY(DescribeEventTopicsResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
