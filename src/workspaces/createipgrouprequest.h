// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPGROUPREQUEST_H
#define QTAWS_CREATEIPGROUPREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateIpGroupRequestPrivate;

class QTAWSWORKSPACES_EXPORT CreateIpGroupRequest : public WorkSpacesRequest {

public:
    CreateIpGroupRequest(const CreateIpGroupRequest &other);
    CreateIpGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIpGroupRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
