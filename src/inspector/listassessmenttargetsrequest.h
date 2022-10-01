// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTTARGETSREQUEST_H
#define QTAWS_LISTASSESSMENTTARGETSREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class ListAssessmentTargetsRequestPrivate;

class QTAWSINSPECTOR_EXPORT ListAssessmentTargetsRequest : public InspectorRequest {

public:
    ListAssessmentTargetsRequest(const ListAssessmentTargetsRequest &other);
    ListAssessmentTargetsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssessmentTargetsRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
