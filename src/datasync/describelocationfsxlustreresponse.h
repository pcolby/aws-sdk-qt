// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONFSXLUSTRERESPONSE_H
#define QTAWS_DESCRIBELOCATIONFSXLUSTRERESPONSE_H

#include "datasyncresponse.h"
#include "describelocationfsxlustrerequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationFsxLustreResponsePrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationFsxLustreResponse : public DataSyncResponse {
    Q_OBJECT

public:
    DescribeLocationFsxLustreResponse(const DescribeLocationFsxLustreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocationFsxLustreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationFsxLustreResponse)
    Q_DISABLE_COPY(DescribeLocationFsxLustreResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
