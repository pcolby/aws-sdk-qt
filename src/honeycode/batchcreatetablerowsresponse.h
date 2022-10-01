// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATETABLEROWSRESPONSE_H
#define QTAWS_BATCHCREATETABLEROWSRESPONSE_H

#include "honeycoderesponse.h"
#include "batchcreatetablerowsrequest.h"

namespace QtAws {
namespace Honeycode {

class BatchCreateTableRowsResponsePrivate;

class QTAWSHONEYCODE_EXPORT BatchCreateTableRowsResponse : public HoneycodeResponse {
    Q_OBJECT

public:
    BatchCreateTableRowsResponse(const BatchCreateTableRowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchCreateTableRowsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchCreateTableRowsResponse)
    Q_DISABLE_COPY(BatchCreateTableRowsResponse)

};

} // namespace Honeycode
} // namespace QtAws

#endif
