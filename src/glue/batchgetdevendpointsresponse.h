// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEVENDPOINTSRESPONSE_H
#define QTAWS_BATCHGETDEVENDPOINTSRESPONSE_H

#include "glueresponse.h"
#include "batchgetdevendpointsrequest.h"

namespace QtAws {
namespace Glue {

class BatchGetDevEndpointsResponsePrivate;

class QTAWSGLUE_EXPORT BatchGetDevEndpointsResponse : public GlueResponse {
    Q_OBJECT

public:
    BatchGetDevEndpointsResponse(const BatchGetDevEndpointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetDevEndpointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetDevEndpointsResponse)
    Q_DISABLE_COPY(BatchGetDevEndpointsResponse)

};

} // namespace Glue
} // namespace QtAws

#endif
