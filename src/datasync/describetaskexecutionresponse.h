// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKEXECUTIONRESPONSE_H
#define QTAWS_DESCRIBETASKEXECUTIONRESPONSE_H

#include "datasyncresponse.h"
#include "describetaskexecutionrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeTaskExecutionResponsePrivate;

class QTAWSDATASYNC_EXPORT DescribeTaskExecutionResponse : public DataSyncResponse {
    Q_OBJECT

public:
    DescribeTaskExecutionResponse(const DescribeTaskExecutionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTaskExecutionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTaskExecutionResponse)
    Q_DISABLE_COPY(DescribeTaskExecutionResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
