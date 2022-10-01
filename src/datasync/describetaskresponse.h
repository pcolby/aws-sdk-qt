// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKRESPONSE_H
#define QTAWS_DESCRIBETASKRESPONSE_H

#include "datasyncresponse.h"
#include "describetaskrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeTaskResponsePrivate;

class QTAWSDATASYNC_EXPORT DescribeTaskResponse : public DataSyncResponse {
    Q_OBJECT

public:
    DescribeTaskResponse(const DescribeTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTaskResponse)
    Q_DISABLE_COPY(DescribeTaskResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
