// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETBLUEPRINTSRESPONSE_H
#define QTAWS_BATCHGETBLUEPRINTSRESPONSE_H

#include "glueresponse.h"
#include "batchgetblueprintsrequest.h"

namespace QtAws {
namespace Glue {

class BatchGetBlueprintsResponsePrivate;

class QTAWSGLUE_EXPORT BatchGetBlueprintsResponse : public GlueResponse {
    Q_OBJECT

public:
    BatchGetBlueprintsResponse(const BatchGetBlueprintsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetBlueprintsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetBlueprintsResponse)
    Q_DISABLE_COPY(BatchGetBlueprintsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
