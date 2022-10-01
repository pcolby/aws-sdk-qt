// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOLUMNSTATISTICSFORPARTITIONRESPONSE_H
#define QTAWS_DELETECOLUMNSTATISTICSFORPARTITIONRESPONSE_H

#include "glueresponse.h"
#include "deletecolumnstatisticsforpartitionrequest.h"

namespace QtAws {
namespace Glue {

class DeleteColumnStatisticsForPartitionResponsePrivate;

class QTAWSGLUE_EXPORT DeleteColumnStatisticsForPartitionResponse : public GlueResponse {
    Q_OBJECT

public:
    DeleteColumnStatisticsForPartitionResponse(const DeleteColumnStatisticsForPartitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteColumnStatisticsForPartitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteColumnStatisticsForPartitionResponse)
    Q_DISABLE_COPY(DeleteColumnStatisticsForPartitionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
