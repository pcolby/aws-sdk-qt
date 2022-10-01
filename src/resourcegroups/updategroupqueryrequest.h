// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGROUPQUERYREQUEST_H
#define QTAWS_UPDATEGROUPQUERYREQUEST_H

#include "resourcegroupsrequest.h"

namespace QtAws {
namespace ResourceGroups {

class UpdateGroupQueryRequestPrivate;

class QTAWSRESOURCEGROUPS_EXPORT UpdateGroupQueryRequest : public ResourceGroupsRequest {

public:
    UpdateGroupQueryRequest(const UpdateGroupQueryRequest &other);
    UpdateGroupQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGroupQueryRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
