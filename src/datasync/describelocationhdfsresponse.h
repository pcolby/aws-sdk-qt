// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONHDFSRESPONSE_H
#define QTAWS_DESCRIBELOCATIONHDFSRESPONSE_H

#include "datasyncresponse.h"
#include "describelocationhdfsrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationHdfsResponsePrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationHdfsResponse : public DataSyncResponse {
    Q_OBJECT

public:
    DescribeLocationHdfsResponse(const DescribeLocationHdfsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocationHdfsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationHdfsResponse)
    Q_DISABLE_COPY(DescribeLocationHdfsResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
