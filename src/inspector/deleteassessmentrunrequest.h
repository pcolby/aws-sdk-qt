// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEASSESSMENTRUNREQUEST_H
#define QTAWS_DELETEASSESSMENTRUNREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class DeleteAssessmentRunRequestPrivate;

class QTAWSINSPECTOR_EXPORT DeleteAssessmentRunRequest : public InspectorRequest {

public:
    DeleteAssessmentRunRequest(const DeleteAssessmentRunRequest &other);
    DeleteAssessmentRunRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAssessmentRunRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
