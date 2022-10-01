// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTSEGMENTPATTERNREQUEST_H
#define QTAWS_TESTSEGMENTPATTERNREQUEST_H

#include "evidentlyrequest.h"

namespace QtAws {
namespace Evidently {

class TestSegmentPatternRequestPrivate;

class QTAWSEVIDENTLY_EXPORT TestSegmentPatternRequest : public EvidentlyRequest {

public:
    TestSegmentPatternRequest(const TestSegmentPatternRequest &other);
    TestSegmentPatternRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TestSegmentPatternRequest)

};

} // namespace Evidently
} // namespace QtAws

#endif
