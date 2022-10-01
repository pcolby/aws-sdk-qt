// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSCHANGEMESSAGEVISIBILITYBATCH_H
#define SQSCHANGEMESSAGEVISIBILITYBATCH_H

#include "sqschangemessagevisibilitybatchrequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsChangeMessageVisibilityBatchResponsePrivate;

class QTAWS_EXPORT SqsChangeMessageVisibilityBatchResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsChangeMessageVisibilityBatchResponse(const SqsChangeMessageVisibilityBatchRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual bool isValid() const;

    virtual const SqsChangeMessageVisibilityBatchRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsChangeMessageVisibilityBatchResponse)
    Q_DISABLE_COPY(SqsChangeMessageVisibilityBatchResponse)
    friend class TestSqsChangeMessageVisibilityBatchResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
