// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSSENDMESSAGE_H
#define SQSSENDMESSAGE_H

#include "sqssendmessagerequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsSendMessageResponsePrivate;

class QTAWS_EXPORT SqsSendMessageResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsSendMessageResponse(const SqsSendMessageRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual bool isValid() const;

    virtual const SqsSendMessageRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsSendMessageResponse)
    Q_DISABLE_COPY(SqsSendMessageResponse)
    friend class TestSqsSendMessageResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
