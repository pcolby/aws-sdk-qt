// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOLUMNSTATISTICSFORPARTITIONRESPONSE_H
#define QTAWS_UPDATECOLUMNSTATISTICSFORPARTITIONRESPONSE_H

#include "glueresponse.h"
#include "updatecolumnstatisticsforpartitionrequest.h"

namespace QtAws {
namespace Glue {

class UpdateColumnStatisticsForPartitionResponsePrivate;

class QTAWSGLUE_EXPORT UpdateColumnStatisticsForPartitionResponse : public GlueResponse {
    Q_OBJECT

public:
    UpdateColumnStatisticsForPartitionResponse(const UpdateColumnStatisticsForPartitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateColumnStatisticsForPartitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateColumnStatisticsForPartitionResponse)
    Q_DISABLE_COPY(UpdateColumnStatisticsForPartitionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
