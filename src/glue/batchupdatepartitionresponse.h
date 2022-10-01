// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEPARTITIONRESPONSE_H
#define QTAWS_BATCHUPDATEPARTITIONRESPONSE_H

#include "glueresponse.h"
#include "batchupdatepartitionrequest.h"

namespace QtAws {
namespace Glue {

class BatchUpdatePartitionResponsePrivate;

class QTAWSGLUE_EXPORT BatchUpdatePartitionResponse : public GlueResponse {
    Q_OBJECT

public:
    BatchUpdatePartitionResponse(const BatchUpdatePartitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchUpdatePartitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdatePartitionResponse)
    Q_DISABLE_COPY(BatchUpdatePartitionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
