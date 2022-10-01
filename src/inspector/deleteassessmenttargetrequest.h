// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTTARGETREQUEST_H
#define QTAWS_DELETEASSESSMENTTARGETREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class DeleteAssessmentTargetRequestPrivate;

class QTAWSINSPECTOR_EXPORT DeleteAssessmentTargetRequest : public InspectorRequest {

public:
    DeleteAssessmentTargetRequest(const DeleteAssessmentTargetRequest &other);
    DeleteAssessmentTargetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssessmentTargetRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
