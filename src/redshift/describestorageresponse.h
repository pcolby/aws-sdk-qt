// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTORAGERESPONSE_H
#define QTAWS_DESCRIBESTORAGERESPONSE_H

#include "redshiftresponse.h"
#include "describestoragerequest.h"

namespace QtAws {
namespace Redshift {

class DescribeStorageResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeStorageResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeStorageResponse(const DescribeStorageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeStorageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStorageResponse)
    Q_DISABLE_COPY(DescribeStorageResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
