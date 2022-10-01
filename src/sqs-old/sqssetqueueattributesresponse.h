// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSSETQUEUEATTRIBUTES_H
#define SQSSETQUEUEATTRIBUTES_H

#include "sqssetqueueattributesrequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsSetQueueAttributesResponsePrivate;

class QTAWS_EXPORT SqsSetQueueAttributesResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsSetQueueAttributesResponse(const SqsSetQueueAttributesRequest &request,
                                  QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SqsSetQueueAttributesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsSetQueueAttributesResponse)
    Q_DISABLE_COPY(SqsSetQueueAttributesResponse)
    friend class TestSqsSetQueueAttributesResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
