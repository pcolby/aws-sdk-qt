// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETETABLEROWSRESPONSE_H
#define QTAWS_BATCHDELETETABLEROWSRESPONSE_H

#include "honeycoderesponse.h"
#include "batchdeletetablerowsrequest.h"

namespace QtAws {
namespace Honeycode {

class BatchDeleteTableRowsResponsePrivate;

class QTAWSHONEYCODE_EXPORT BatchDeleteTableRowsResponse : public HoneycodeResponse {
    Q_OBJECT

public:
    BatchDeleteTableRowsResponse(const BatchDeleteTableRowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeleteTableRowsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteTableRowsResponse)
    Q_DISABLE_COPY(BatchDeleteTableRowsResponse)

};

} // namespace Honeycode
} // namespace QtAws

#endif
