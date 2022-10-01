// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTITIONINDEXRESPONSE_H
#define QTAWS_DELETEPARTITIONINDEXRESPONSE_H

#include "glueresponse.h"
#include "deletepartitionindexrequest.h"

namespace QtAws {
namespace Glue {

class DeletePartitionIndexResponsePrivate;

class QTAWSGLUE_EXPORT DeletePartitionIndexResponse : public GlueResponse {
    Q_OBJECT

public:
    DeletePartitionIndexResponse(const DeletePartitionIndexRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePartitionIndexRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePartitionIndexResponse)
    Q_DISABLE_COPY(DeletePartitionIndexResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
