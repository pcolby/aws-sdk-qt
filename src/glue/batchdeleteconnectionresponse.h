// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETECONNECTIONRESPONSE_H
#define QTAWS_BATCHDELETECONNECTIONRESPONSE_H

#include "glueresponse.h"
#include "batchdeleteconnectionrequest.h"

namespace QtAws {
namespace Glue {

class BatchDeleteConnectionResponsePrivate;

class QTAWSGLUE_EXPORT BatchDeleteConnectionResponse : public GlueResponse {
    Q_OBJECT

public:
    BatchDeleteConnectionResponse(const BatchDeleteConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeleteConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteConnectionResponse)
    Q_DISABLE_COPY(BatchDeleteConnectionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
