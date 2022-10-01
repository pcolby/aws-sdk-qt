// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPASSESSMENTRUNREQUEST_H
#define QTAWS_STOPASSESSMENTRUNREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class StopAssessmentRunRequestPrivate;

class QTAWSINSPECTOR_EXPORT StopAssessmentRunRequest : public InspectorRequest {

public:
    StopAssessmentRunRequest(const StopAssessmentRunRequest &other);
    StopAssessmentRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopAssessmentRunRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
