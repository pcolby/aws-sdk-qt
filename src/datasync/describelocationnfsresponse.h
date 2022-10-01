// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONNFSRESPONSE_H
#define QTAWS_DESCRIBELOCATIONNFSRESPONSE_H

#include "datasyncresponse.h"
#include "describelocationnfsrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationNfsResponsePrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationNfsResponse : public DataSyncResponse {
    Q_OBJECT

public:
    DescribeLocationNfsResponse(const DescribeLocationNfsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocationNfsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationNfsResponse)
    Q_DISABLE_COPY(DescribeLocationNfsResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
