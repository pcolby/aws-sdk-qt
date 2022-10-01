// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETCUSTOMENTITYTYPESRESPONSE_H
#define QTAWS_BATCHGETCUSTOMENTITYTYPESRESPONSE_H

#include "glueresponse.h"
#include "batchgetcustomentitytypesrequest.h"

namespace QtAws {
namespace Glue {

class BatchGetCustomEntityTypesResponsePrivate;

class QTAWSGLUE_EXPORT BatchGetCustomEntityTypesResponse : public GlueResponse {
    Q_OBJECT

public:
    BatchGetCustomEntityTypesResponse(const BatchGetCustomEntityTypesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetCustomEntityTypesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetCustomEntityTypesResponse)
    Q_DISABLE_COPY(BatchGetCustomEntityTypesResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
