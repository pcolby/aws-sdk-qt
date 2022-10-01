// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERULESOFIPGROUPREQUEST_H
#define QTAWS_UPDATERULESOFIPGROUPREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class UpdateRulesOfIpGroupRequestPrivate;

class QTAWSWORKSPACES_EXPORT UpdateRulesOfIpGroupRequest : public WorkSpacesRequest {

public:
    UpdateRulesOfIpGroupRequest(const UpdateRulesOfIpGroupRequest &other);
    UpdateRulesOfIpGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateRulesOfIpGroupRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
