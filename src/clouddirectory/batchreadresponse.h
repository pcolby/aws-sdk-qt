// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHREADRESPONSE_H
#define QTAWS_BATCHREADRESPONSE_H

#include "clouddirectoryresponse.h"
#include "batchreadrequest.h"

namespace QtAws {
namespace CloudDirectory {

class BatchReadResponsePrivate;

class QTAWSCLOUDDIRECTORY_EXPORT BatchReadResponse : public CloudDirectoryResponse {
    Q_OBJECT

public:
    BatchReadResponse(const BatchReadRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchReadRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchReadResponse)
    Q_DISABLE_COPY(BatchReadResponse)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
