// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONEFSRESPONSE_H
#define QTAWS_DESCRIBELOCATIONEFSRESPONSE_H

#include "datasyncresponse.h"
#include "describelocationefsrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationEfsResponsePrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationEfsResponse : public DataSyncResponse {
    Q_OBJECT

public:
    DescribeLocationEfsResponse(const DescribeLocationEfsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocationEfsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationEfsResponse)
    Q_DISABLE_COPY(DescribeLocationEfsResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
