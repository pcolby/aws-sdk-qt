// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSDELETEMESSAGE_H
#define SQSDELETEMESSAGE_H

#include "sqsdeletemessagerequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsDeleteMessageResponsePrivate;

class QTAWS_EXPORT SqsDeleteMessageResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsDeleteMessageResponse(const SqsDeleteMessageRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SqsDeleteMessageRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsDeleteMessageResponse)
    Q_DISABLE_COPY(SqsDeleteMessageResponse)
    friend class TestSqsDeleteMessageResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
