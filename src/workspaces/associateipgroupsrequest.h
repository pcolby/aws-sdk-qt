// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEIPGROUPSREQUEST_H
#define QTAWS_ASSOCIATEIPGROUPSREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class AssociateIpGroupsRequestPrivate;

class QTAWSWORKSPACES_EXPORT AssociateIpGroupsRequest : public WorkSpacesRequest {

public:
    AssociateIpGroupsRequest(const AssociateIpGroupsRequest &other);
    AssociateIpGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateIpGroupsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
