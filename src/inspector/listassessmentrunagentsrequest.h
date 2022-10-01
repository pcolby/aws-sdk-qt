// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTRUNAGENTSREQUEST_H
#define QTAWS_LISTASSESSMENTRUNAGENTSREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class ListAssessmentRunAgentsRequestPrivate;

class QTAWSINSPECTOR_EXPORT ListAssessmentRunAgentsRequest : public InspectorRequest {

public:
    ListAssessmentRunAgentsRequest(const ListAssessmentRunAgentsRequest &other);
    ListAssessmentRunAgentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssessmentRunAgentsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
