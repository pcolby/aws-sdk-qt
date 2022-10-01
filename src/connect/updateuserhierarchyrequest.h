// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERHIERARCHYREQUEST_H
#define QTAWS_UPDATEUSERHIERARCHYREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserHierarchyRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateUserHierarchyRequest : public ConnectRequest {

public:
    UpdateUserHierarchyRequest(const UpdateUserHierarchyRequest &other);
    UpdateUserHierarchyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserHierarchyRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
