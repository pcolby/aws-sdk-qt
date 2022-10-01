// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATETABLEROWSRESPONSE_H
#define QTAWS_BATCHUPDATETABLEROWSRESPONSE_H

#include "honeycoderesponse.h"
#include "batchupdatetablerowsrequest.h"

namespace QtAws {
namespace Honeycode {

class BatchUpdateTableRowsResponsePrivate;

class QTAWSHONEYCODE_EXPORT BatchUpdateTableRowsResponse : public HoneycodeResponse {
    Q_OBJECT

public:
    BatchUpdateTableRowsResponse(const BatchUpdateTableRowsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchUpdateTableRowsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdateTableRowsResponse)
    Q_DISABLE_COPY(BatchUpdateTableRowsResponse)

};

} // namespace Honeycode
} // namespace QtAws

#endif
