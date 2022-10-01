// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOLUMNSTATISTICSFORTABLERESPONSE_H
#define QTAWS_DELETECOLUMNSTATISTICSFORTABLERESPONSE_H

#include "glueresponse.h"
#include "deletecolumnstatisticsfortablerequest.h"

namespace QtAws {
namespace Glue {

class DeleteColumnStatisticsForTableResponsePrivate;

class QTAWSGLUE_EXPORT DeleteColumnStatisticsForTableResponse : public GlueResponse {
    Q_OBJECT

public:
    DeleteColumnStatisticsForTableResponse(const DeleteColumnStatisticsForTableRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteColumnStatisticsForTableRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteColumnStatisticsForTableResponse)
    Q_DISABLE_COPY(DeleteColumnStatisticsForTableResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
