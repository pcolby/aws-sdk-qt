// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef SQSLISTQUEUES_H
#define SQSLISTQUEUES_H

#include "sqslistqueuesrequest.h"
#include "sqsresponse.h"

namespace QtAws {
namespace SqsOld {

class SqsListQueuesResponsePrivate;

class QTAWS_EXPORT SqsListQueuesResponse : public SqsResponse {
    Q_OBJECT

public:
    SqsListQueuesResponse(const SqsListQueuesRequest &request,
                             QNetworkReply * const reply, QObject * const parent = 0);

    virtual bool isValid() const;

    virtual const SqsListQueuesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(SqsListQueuesResponse)
    Q_DISABLE_COPY(SqsListQueuesResponse)
    friend class TestSqsListQueuesResponse;
};

} // namespace SqsOld
} // namespace QtAws

#endif
