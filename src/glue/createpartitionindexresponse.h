// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPARTITIONINDEXRESPONSE_H
#define QTAWS_CREATEPARTITIONINDEXRESPONSE_H

#include "glueresponse.h"
#include "createpartitionindexrequest.h"

namespace QtAws {
namespace Glue {

class CreatePartitionIndexResponsePrivate;

class QTAWSGLUE_EXPORT CreatePartitionIndexResponse : public GlueResponse {
    Q_OBJECT

public:
    CreatePartitionIndexResponse(const CreatePartitionIndexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePartitionIndexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePartitionIndexResponse)
    Q_DISABLE_COPY(CreatePartitionIndexResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
