// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSSENDMESSAGEBATCH_H
#define SQSSENDMESSAGEBATCH_H

#include "sqssendmessagebatchrequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsSendMessageBatchResponsePrivate;

class QTAWS_EXPORT SqsSendMessageBatchResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsSendMessageBatchResponse(const SqsSendMessageBatchRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual bool isValid() const;

    virtual const SqsSendMessageBatchRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsSendMessageBatchResponse)
    Q_DISABLE_COPY(SqsSendMessageBatchResponse)
    friend class TestSqsSendMessageBatchResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
