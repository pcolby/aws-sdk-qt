// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHWRITERESPONSE_H
#define QTAWS_BATCHWRITERESPONSE_H

#include "clouddirectoryresponse.h"
#include "batchwriterequest.h"

namespace QtAws {
namespace CloudDirectory {

class BatchWriteResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT BatchWriteResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    BatchWriteResponse(const BatchWriteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchWriteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchWriteResponse)
    Q_DISABLE_COPY(BatchWriteResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
