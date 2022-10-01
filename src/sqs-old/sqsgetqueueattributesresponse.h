// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSGETQUEUEATTRIBUTES_H
#define SQSGETQUEUEATTRIBUTES_H

#include "sqsgetqueueattributesrequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsGetQueueAttributesResponsePrivate;

class QTAWS_EXPORT SqsGetQueueAttributesResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsGetQueueAttributesResponse(const SqsGetQueueAttributesRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual bool isValid() const;

    virtual const SqsGetQueueAttributesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsGetQueueAttributesResponse)
    Q_DISABLE_COPY(SqsGetQueueAttributesResponse)
    friend class TestSqsGetQueueAttributesResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
