// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPQUERYREQUEST_H
#define QTAWS_GETGROUPQUERYREQUEST_H

#include "resourcegroupsrequest.h"

namespace QtAws {
namespace ResourceGroups {

class GetGroupQueryRequestPrivate;

class QTAWSRESOURCEGROUPS_EXPORT GetGroupQueryRequest : public ResourceGroupsRequest {

public:
    GetGroupQueryRequest(const GetGroupQueryRequest &other);
    GetGroupQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupQueryRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
