// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONDITIONALFORWARDERSRESPONSE_P_H
#define QTAWS_DESCRIBECONDITIONALFORWARDERSRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DescribeConditionalForwardersResponse;

class DescribeConditionalForwardersResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DescribeConditionalForwardersResponsePrivate(DescribeConditionalForwardersResponse * const q);

    void parseDescribeConditionalForwardersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConditionalForwardersResponse)
    Q_DISABLE_COPY(DescribeConditionalForwardersResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
