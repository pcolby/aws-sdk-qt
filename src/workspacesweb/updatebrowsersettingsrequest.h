// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBROWSERSETTINGSREQUEST_H
#define QTAWS_UPDATEBROWSERSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateBrowserSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT UpdateBrowserSettingsRequest : public WorkSpacesWebRequest {

public:
    UpdateBrowserSettingsRequest(const UpdateBrowserSettingsRequest &other);
    UpdateBrowserSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBrowserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
