// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPORTALREQUEST_H
#define QTAWS_GETPORTALREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetPortalRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT GetPortalRequest : public WorkSpacesWebRequest {

public:
    GetPortalRequest(const GetPortalRequest &other);
    GetPortalRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPortalRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
