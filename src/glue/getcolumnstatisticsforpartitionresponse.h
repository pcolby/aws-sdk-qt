// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOLUMNSTATISTICSFORPARTITIONRESPONSE_H
#define QTAWS_GETCOLUMNSTATISTICSFORPARTITIONRESPONSE_H

#include "glueresponse.h"
#include "getcolumnstatisticsforpartitionrequest.h"

namespace QtAws {
namespace Glue {

class GetColumnStatisticsForPartitionResponsePrivate;

class QTAWSGLUE_EXPORT GetColumnStatisticsForPartitionResponse : public GlueResponse {
    Q_OBJECT

public:
    GetColumnStatisticsForPartitionResponse(const GetColumnStatisticsForPartitionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetColumnStatisticsForPartitionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetColumnStatisticsForPartitionResponse)
    Q_DISABLE_COPY(GetColumnStatisticsForPartitionResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
