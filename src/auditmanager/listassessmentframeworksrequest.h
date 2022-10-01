// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTFRAMEWORKSREQUEST_H
#define QTAWS_LISTASSESSMENTFRAMEWORKSREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentFrameworksRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT ListAssessmentFrameworksRequest : public AuditManagerRequest {

public:
    ListAssessmentFrameworksRequest(const ListAssessmentFrameworksRequest &other);
    ListAssessmentFrameworksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssessmentFrameworksRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
