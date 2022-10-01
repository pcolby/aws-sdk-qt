// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTFAILOVERRESPONSE_H
#define QTAWS_TESTFAILOVERRESPONSE_H

#include "elasticacheresponse.h"
#include "testfailoverrequest.h"

namespace QtAws {
namespace ElastiCache {

class TestFailoverResponsePrivate;

class QTAWSELASTICACHE_EXPORT TestFailoverResponse : public ElastiCacheResponse {
    Q_OBJECT

public:
    TestFailoverResponse(const TestFailoverRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestFailoverRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestFailoverResponse)
    Q_DISABLE_COPY(TestFailoverResponse)

};

} // namespace ElastiCache
} // namespace QtAws

#endif
