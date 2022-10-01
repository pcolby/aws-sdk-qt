// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONS3RESPONSE_H
#define QTAWS_DESCRIBELOCATIONS3RESPONSE_H

#include "datasyncresponse.h"
#include "describelocations3request.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationS3ResponsePrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationS3Response : public DataSyncResponse {
    Q_OBJECT

public:
    DescribeLocationS3Response(const DescribeLocationS3Request &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocationS3Request * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationS3Response)
    Q_DISABLE_COPY(DescribeLocationS3Response)

};

} // namespace DataSync
} // namespace QtAws

#endif
