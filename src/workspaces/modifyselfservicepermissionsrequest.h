// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSELFSERVICEPERMISSIONSREQUEST_H
#define QTAWS_MODIFYSELFSERVICEPERMISSIONSREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifySelfservicePermissionsRequestPrivate;

class QTAWSWORKSPACES_EXPORT ModifySelfservicePermissionsRequest : public WorkSpacesRequest {

public:
    ModifySelfservicePermissionsRequest(const ModifySelfservicePermissionsRequest &other);
    ModifySelfservicePermissionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifySelfservicePermissionsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
