// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETETABLEVERSIONRESPONSE_H
#define QTAWS_BATCHDELETETABLEVERSIONRESPONSE_H

#include "glueresponse.h"
#include "batchdeletetableversionrequest.h"

namespace QtAws {
namespace Glue {

class BatchDeleteTableVersionResponsePrivate;

class QTAWSGLUE_EXPORT BatchDeleteTableVersionResponse : public GlueResponse {
    Q_OBJECT

public:
    BatchDeleteTableVersionResponse(const BatchDeleteTableVersionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeleteTableVersionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteTableVersionResponse)
    Q_DISABLE_COPY(BatchDeleteTableVersionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
