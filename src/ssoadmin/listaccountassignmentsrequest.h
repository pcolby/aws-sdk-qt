// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTASSIGNMENTSREQUEST_H
#define QTAWS_LISTACCOUNTASSIGNMENTSREQUEST_H

#include "ssoadminrequest.h"

namespace QtAws {
namespace SsoAdmin {

class ListAccountAssignmentsRequestPrivate;

class QTAWSSSOADMIN_EXPORT ListAccountAssignmentsRequest : public SsoAdminRequest {

public:
    ListAccountAssignmentsRequest(const ListAccountAssignmentsRequest &other);
    ListAccountAssignmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountAssignmentsRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
