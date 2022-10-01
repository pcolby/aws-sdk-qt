// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPORTALREQUEST_H
#define QTAWS_UPDATEPORTALREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdatePortalRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT UpdatePortalRequest : public WorkSpacesWebRequest {

public:
    UpdatePortalRequest(const UpdatePortalRequest &other);
    UpdatePortalRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePortalRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
