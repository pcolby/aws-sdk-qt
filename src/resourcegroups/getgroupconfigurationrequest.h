// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPCONFIGURATIONREQUEST_H
#define QTAWS_GETGROUPCONFIGURATIONREQUEST_H

#include "resourcegroupsrequest.h"

namespace QtAws {
namespace ResourceGroups {

class GetGroupConfigurationRequestPrivate;

class QTAWSRESOURCEGROUPS_EXPORT GetGroupConfigurationRequest : public ResourceGroupsRequest {

public:
    GetGroupConfigurationRequest(const GetGroupConfigurationRequest &other);
    GetGroupConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGroupConfigurationRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
