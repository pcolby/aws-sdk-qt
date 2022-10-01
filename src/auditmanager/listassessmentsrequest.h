// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTASSESSMENTSREQUEST_H
#define QTAWS_LISTASSESSMENTSREQUEST_H

#include "auditmanagerrequest.h"

namespace QtAws {
namespace AuditManager {

class ListAssessmentsRequestPrivate;

class QTAWSAUDITMANAGER_EXPORT ListAssessmentsRequest : public AuditManagerRequest {

public:
    ListAssessmentsRequest(const ListAssessmentsRequest &other);
    ListAssessmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAssessmentsRequest)

};

} // namespace AuditManager
} // namespace QtAws

#endif
