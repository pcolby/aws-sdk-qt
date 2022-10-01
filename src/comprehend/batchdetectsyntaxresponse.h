// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTSYNTAXRESPONSE_H
#define QTAWS_BATCHDETECTSYNTAXRESPONSE_H

#include "comprehendresponse.h"
#include "batchdetectsyntaxrequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectSyntaxResponsePrivate;

class QTAWSCOMPREHEND_EXPORT BatchDetectSyntaxResponse : public ComprehendResponse {
    Q_OBJECT

public:
    BatchDetectSyntaxResponse(const BatchDetectSyntaxRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDetectSyntaxRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDetectSyntaxResponse)
    Q_DISABLE_COPY(BatchDetectSyntaxResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
