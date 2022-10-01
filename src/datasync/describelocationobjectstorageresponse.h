// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONOBJECTSTORAGERESPONSE_H
#define QTAWS_DESCRIBELOCATIONOBJECTSTORAGERESPONSE_H

#include "datasyncresponse.h"
#include "describelocationobjectstoragerequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationObjectStorageResponsePrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationObjectStorageResponse : public DataSyncResponse {
    Q_OBJECT

public:
    DescribeLocationObjectStorageResponse(const DescribeLocationObjectStorageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocationObjectStorageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationObjectStorageResponse)
    Q_DISABLE_COPY(DescribeLocationObjectStorageResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
