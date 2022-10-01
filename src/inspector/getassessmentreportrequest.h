// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETASSESSMENTREPORTREQUEST_H
#define QTAWS_GETASSESSMENTREPORTREQUEST_H

#include "inspectorrequest.h"

namespace QtAws {
namespace Inspector {

class GetAssessmentReportRequestPrivate;

class QTAWSINSPECTOR_EXPORT GetAssessmentReportRequest : public InspectorRequest {

public:
    GetAssessmentReportRequest(const GetAssessmentReportRequest &other);
    GetAssessmentReportRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAssessmentReportRequest)

};

} // namespace Inspector
} // namespace QtAws

#endif
