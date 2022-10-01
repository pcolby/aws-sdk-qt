// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPSERTTABLEROWSRESPONSE_H
#define QTAWS_BATCHUPSERTTABLEROWSRESPONSE_H

#include "honeycoderesponse.h"
#include "batchupserttablerowsrequest.h"

namespace QtAws {
namespace Honeycode {

class BatchUpsertTableRowsResponsePrivate;

class QTAWSHONEYCODE_EXPORT BatchUpsertTableRowsResponse : public HoneycodeResponse {
    Q_OBJECT

public:
    BatchUpsertTableRowsResponse(const BatchUpsertTableRowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchUpsertTableRowsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpsertTableRowsResponse)
    Q_DISABLE_COPY(BatchUpsertTableRowsResponse)

};

} // namespace Honeycode
} // namespace QtAws

#endif
