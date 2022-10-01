// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTENTITIESRESPONSE_H
#define QTAWS_BATCHDETECTENTITIESRESPONSE_H

#include "comprehendresponse.h"
#include "batchdetectentitiesrequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectEntitiesResponsePrivate;

class QTAWSCOMPREHEND_EXPORT BatchDetectEntitiesResponse : public ComprehendResponse {
    Q_OBJECT

public:
    BatchDetectEntitiesResponse(const BatchDetectEntitiesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDetectEntitiesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDetectEntitiesResponse)
    Q_DISABLE_COPY(BatchDetectEntitiesResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
