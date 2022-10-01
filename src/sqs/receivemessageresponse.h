// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RECEIVEMESSAGERESPONSE_H
#define QTAWS_RECEIVEMESSAGERESPONSE_H

#include "sqsresponse.h"
#include "receivemessagerequest.h"

namespace QtAws {
namespace Sqs {

class ReceiveMessageResponsePrivate;

class QTAWSSQS_EXPORT ReceiveMessageResponse : public SqsResponse {
    Q_OBJECT

public:
    ReceiveMessageResponse(const ReceiveMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReceiveMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReceiveMessageResponse)
    Q_DISABLE_COPY(ReceiveMessageResponse)

};

} // namespace Sqs
} // namespace QtAws

#endif
