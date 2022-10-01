// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSCHANGEMESSAGEVISIBILITY_H
#define SQSCHANGEMESSAGEVISIBILITY_H

#include "sqschangemessagevisibilityrequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsChangeMessageVisibilityResponsePrivate;

class QTAWS_EXPORT SqsChangeMessageVisibilityResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsChangeMessageVisibilityResponse(const SqsChangeMessageVisibilityRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SqsChangeMessageVisibilityRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsChangeMessageVisibilityResponse)
    Q_DISABLE_COPY(SqsChangeMessageVisibilityResponse)
    friend class TestSqsChangeMessageVisibilityResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
