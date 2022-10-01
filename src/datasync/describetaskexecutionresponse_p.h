// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKEXECUTIONRESPONSE_P_H
#define QTAWS_DESCRIBETASKEXECUTIONRESPONSE_P_H

#include "datasyncresponse_p.h"

namespace QtAws {
namespace DataSync {

class DescribeTaskExecutionResponse;

class DescribeTaskExecutionResponsePrivate : public DataSyncResponsePrivate {

public:

    explicit DescribeTaskExecutionResponsePrivate(DescribeTaskExecutionResponse * const q);

    void parseDescribeTaskExecutionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTaskExecutionResponse)
    Q_DISABLE_COPY(DescribeTaskExecutionResponsePrivate)

};

} // namespace DataSync
} // namespace QtAws

#endif
