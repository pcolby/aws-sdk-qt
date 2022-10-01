// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOCATIONFSXOPENZFSRESPONSE_H
#define QTAWS_DESCRIBELOCATIONFSXOPENZFSRESPONSE_H

#include "datasyncresponse.h"
#include "describelocationfsxopenzfsrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeLocationFsxOpenZfsResponsePrivate;

class QTAWSDATASYNC_EXPORT DescribeLocationFsxOpenZfsResponse : public DataSyncResponse {
    Q_OBJECT

public:
    DescribeLocationFsxOpenZfsResponse(const DescribeLocationFsxOpenZfsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLocationFsxOpenZfsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLocationFsxOpenZfsResponse)
    Q_DISABLE_COPY(DescribeLocationFsxOpenZfsResponse)

};

} // namespace DataSync
} // namespace QtAws

#endif
