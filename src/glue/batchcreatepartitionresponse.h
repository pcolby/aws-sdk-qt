// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEPARTITIONRESPONSE_H
#define QTAWS_BATCHCREATEPARTITIONRESPONSE_H

#include "glueresponse.h"
#include "batchcreatepartitionrequest.h"

namespace QtAws {
namespace Glue {

class BatchCreatePartitionResponsePrivate;

class QTAWSGLUE_EXPORT BatchCreatePartitionResponse : public GlueResponse {
    Q_OBJECT

public:
    BatchCreatePartitionResponse(const BatchCreatePartitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchCreatePartitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchCreatePartitionResponse)
    Q_DISABLE_COPY(BatchCreatePartitionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
