// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEBROWSERSETTINGSREQUEST_H
#define QTAWS_ASSOCIATEBROWSERSETTINGSREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class AssociateBrowserSettingsRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT AssociateBrowserSettingsRequest : public WorkSpacesWebRequest {

public:
    AssociateBrowserSettingsRequest(const AssociateBrowserSettingsRequest &other);
    AssociateBrowserSettingsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateBrowserSettingsRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
