// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEPARTITIONRESPONSE_H
#define QTAWS_BATCHDELETEPARTITIONRESPONSE_H

#include "glueresponse.h"
#include "batchdeletepartitionrequest.h"

namespace QtAws {
namespace Glue {

class BatchDeletePartitionResponsePrivate;

class QTAWSGLUE_EXPORT BatchDeletePartitionResponse : public GlueResponse {
    Q_OBJECT

public:
    BatchDeletePartitionResponse(const BatchDeletePartitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDeletePartitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeletePartitionResponse)
    Q_DISABLE_COPY(BatchDeletePartitionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
