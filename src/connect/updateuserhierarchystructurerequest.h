// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERHIERARCHYSTRUCTUREREQUEST_H
#define QTAWS_UPDATEUSERHIERARCHYSTRUCTUREREQUEST_H

#include "connectrequest.h"

namespace QtAws {
namespace Connect {

class UpdateUserHierarchyStructureRequestPrivate;

class QTAWSCONNECT_EXPORT UpdateUserHierarchyStructureRequest : public ConnectRequest {

public:
    UpdateUserHierarchyStructureRequest(const UpdateUserHierarchyStructureRequest &other);
    UpdateUserHierarchyStructureRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateUserHierarchyStructureRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
