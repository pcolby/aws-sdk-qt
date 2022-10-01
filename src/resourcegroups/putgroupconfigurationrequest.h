// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTGROUPCONFIGURATIONREQUEST_H
#define QTAWS_PUTGROUPCONFIGURATIONREQUEST_H

#include "resourcegroupsrequest.h"

namespace QtAws {
namespace ResourceGroups {

class PutGroupConfigurationRequestPrivate;

class QTAWSRESOURCEGROUPS_EXPORT PutGroupConfigurationRequest : public ResourceGroupsRequest {

public:
    PutGroupConfigurationRequest(const PutGroupConfigurationRequest &other);
    PutGroupConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutGroupConfigurationRequest)

};

} // namespace ResourceGroups
} // namespace QtAws

#endif
