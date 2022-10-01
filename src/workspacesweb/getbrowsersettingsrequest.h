// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBROWSERSETTINGSREQUEST_H
#define QTAWS_GETBROWSERSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetBrowserSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT GetBrowserSettingsRequest : public WorkSpacesWebRequest {

public:
    GetBrowserSettingsRequest(const GetBrowserSettingsRequest &other);
    GetBrowserSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBrowserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
