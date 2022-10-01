// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBROWSERSETTINGSREQUEST_H
#define QTAWS_LISTBROWSERSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListBrowserSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT ListBrowserSettingsRequest : public WorkSpacesWebRequest {

public:
    ListBrowserSettingsRequest(const ListBrowserSettingsRequest &other);
    ListBrowserSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBrowserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
