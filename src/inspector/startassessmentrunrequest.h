// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTASSESSMENTRUNREQUEST_H
#define QTAWS_STARTASSESSMENTRUNREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class StartAssessmentRunRequestPrivate;

class QTAWSINSPECTOR_EXPORT StartAssessmentRunRequest : public InspectorRequest {

public:
    StartAssessmentRunRequest(const StartAssessmentRunRequest &other);
    StartAssessmentRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartAssessmentRunRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
