// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGRESOURCEREQUEST_H
#define QTAWS_TAGRESOURCEREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class TagResourceRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT TagResourceRequest : public WorkSpacesWebRequest {

public:
    TagResourceRequest(const TagResourceRequest &other);
    TagResourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagResourceRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
