// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETETABLERESPONSE_H
#define QTAWS_BATCHDELETETABLERESPONSE_H

#include "glueresponse.h"
#include "batchdeletetablerequest.h"

namespace QtAws {
namespace Glue {

class BatchDeleteTableResponsePrivate;

class QTAWSGLUE_EXPORT BatchDeleteTableResponse : public GlueResponse {
    Q_OBJECT

public:
    BatchDeleteTableResponse(const BatchDeleteTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeleteTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteTableResponse)
    Q_DISABLE_COPY(BatchDeleteTableResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
