// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTREPORTSREQUEST_H
#define QTAWS_LISTASSESSMENTREPORTSREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentReportsRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT ListAssessmentReportsRequest : public AuditManagerRequest {

public:
    ListAssessmentReportsRequest(const ListAssessmentReportsRequest &other);
    ListAssessmentReportsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssessmentReportsRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
