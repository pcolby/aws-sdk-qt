// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOLUMNSTATISTICSFORTABLERESPONSE_H
#define QTAWS_GETCOLUMNSTATISTICSFORTABLERESPONSE_H

#include "glueresponse.h"
#include "getcolumnstatisticsfortablerequest.h"

namespace QtAws {
namespace Glue {

class GetColumnStatisticsForTableResponsePrivate;

class QTAWSGLUE_EXPORT GetColumnStatisticsForTableResponse : public GlueResponse {
    Q_OBJECT

public:
    GetColumnStatisticsForTableResponse(const GetColumnStatisticsForTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetColumnStatisticsForTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetColumnStatisticsForTableResponse)
    Q_DISABLE_COPY(GetColumnStatisticsForTableResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
