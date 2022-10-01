// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTTEMPLATESREQUEST_H
#define QTAWS_LISTASSESSMENTTEMPLATESREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class ListAssessmentTemplatesRequestPrivate;

class QTAWSINSPECTOR_EXPORT ListAssessmentTemplatesRequest : public InspectorRequest {

public:
    ListAssessmentTemplatesRequest(const ListAssessmentTemplatesRequest &other);
    ListAssessmentTemplatesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssessmentTemplatesRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
