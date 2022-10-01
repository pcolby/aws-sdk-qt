// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEASSESSMENTTARGETREQUEST_H
#define QTAWS_UPDATEASSESSMENTTARGETREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class UpdateAssessmentTargetRequestPrivate;

class QTAWSINSPECTOR_EXPORT UpdateAssessmentTargetRequest : public InspectorRequest {

public:
    UpdateAssessmentTargetRequest(const UpdateAssessmentTargetRequest &other);
    UpdateAssessmentTargetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAssessmentTargetRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
