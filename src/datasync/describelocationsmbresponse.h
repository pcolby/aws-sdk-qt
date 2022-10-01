// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONSMBRESPONSE_H
#define QTAWS_DESCRIBELOCATIONSMBRESPONSE_H

#include "datasyncresponse.h"
#include "describelocationsmbrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationSmbResponsePrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationSmbResponse : public DataSyncResponse {
    Q_OBJECT

public:
    DescribeLocationSmbResponse(const DescribeLocationSmbRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocationSmbRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationSmbResponse)
    Q_DISABLE_COPY(DescribeLocationSmbResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
