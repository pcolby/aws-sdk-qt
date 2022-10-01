// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDETECTKEYPHRASESRESPONSE_H
#define QTAWS_BATCHDETECTKEYPHRASESRESPONSE_H

#include "comprehendresponse.h"
#include "batchdetectkeyphrasesrequest.h"

namespace QtAws {
namespace Comprehend {

class BatchDetectKeyPhrasesResponsePrivate;

class QTAWSCOMPREHEND_EXPORT BatchDetectKeyPhrasesResponse : public ComprehendResponse {
    Q_OBJECT

public:
    BatchDetectKeyPhrasesResponse(const BatchDetectKeyPhrasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchDetectKeyPhrasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDetectKeyPhrasesResponse)
    Q_DISABLE_COPY(BatchDetectKeyPhrasesResponse)

};

} // namespace Comprehend
} // namespace QtAws

#endif
