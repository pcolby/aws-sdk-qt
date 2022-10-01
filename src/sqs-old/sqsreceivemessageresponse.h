// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSRECEIVEMESSAGE_H
#define SQSRECEIVEMESSAGE_H

#include "sqsreceivemessagerequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsReceiveMessageResponsePrivate;

class QTAWS_EXPORT SqsReceiveMessageResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsReceiveMessageResponse(const SqsReceiveMessageRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual bool isValid() const;

    virtual const SqsReceiveMessageRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsReceiveMessageResponse)
    Q_DISABLE_COPY(SqsReceiveMessageResponse)
    friend class TestSqsReceiveMessageResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
