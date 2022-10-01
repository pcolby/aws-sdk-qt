// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTDOMINANTLANGUAGERESPONSE_H
#define QTAWS_BATCHDETECTDOMINANTLANGUAGERESPONSE_H

#include "comprehendresponse.h"
#include "batchdetectdominantlanguagerequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectDominantLanguageResponsePrivate;

class QTAWSCOMPREHEND_EXPORT BatchDetectDominantLanguageResponse : public ComprehendResponse {
    Q_OBJECT

public:
    BatchDetectDominantLanguageResponse(const BatchDetectDominantLanguageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDetectDominantLanguageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDetectDominantLanguageResponse)
    Q_DISABLE_COPY(BatchDetectDominantLanguageResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
