// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTSEGMENTPATTERNRESPONSE_H
#define QTAWS_TESTSEGMENTPATTERNRESPONSE_H

#include "evidentlyresponse.h"
#include "testsegmentpatternrequest.h"

namespace QtAws {
namespace Evidently {

class TestSegmentPatternResponsePrivate;

class QTAWSEVIDENTLY_EXPORT TestSegmentPatternResponse : public EvidentlyResponse {
    Q_OBJECT

public:
    TestSegmentPatternResponse(const TestSegmentPatternRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TestSegmentPatternRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestSegmentPatternResponse)
    Q_DISABLE_COPY(TestSegmentPatternResponse)

};

} // namespace Evidently
} // namespace QtAws

#endif
