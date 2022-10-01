// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETSTREAMKEYRESPONSE_H
#define QTAWS_BATCHGETSTREAMKEYRESPONSE_H

#include "ivsresponse.h"
#include "batchgetstreamkeyrequest.h"

namespace QtAws {
namespace Ivs {

class BatchGetStreamKeyResponsePrivate;

class QTAWSIVS_EXPORT BatchGetStreamKeyResponse : public IvsResponse {
    Q_OBJECT

public:
    BatchGetStreamKeyResponse(const BatchGetStreamKeyRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetStreamKeyRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetStreamKeyResponse)
    Q_DISABLE_COPY(BatchGetStreamKeyResponse)

};

} // namespace Ivs
} // namespace QtAws

#endif
