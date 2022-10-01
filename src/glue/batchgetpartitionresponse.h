// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETPARTITIONRESPONSE_H
#define QTAWS_BATCHGETPARTITIONRESPONSE_H

#include "glueresponse.h"
#include "batchgetpartitionrequest.h"

namespace QtAws {
namespace Glue {

class BatchGetPartitionResponsePrivate;

class QTAWSGLUE_EXPORT BatchGetPartitionResponse : public GlueResponse {
    Q_OBJECT

public:
    BatchGetPartitionResponse(const BatchGetPartitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetPartitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetPartitionResponse)
    Q_DISABLE_COPY(BatchGetPartitionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
