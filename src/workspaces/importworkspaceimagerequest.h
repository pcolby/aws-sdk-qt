// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTWORKSPACEIMAGEREQUEST_H
#define QTAWS_IMPORTWORKSPACEIMAGEREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ImportWorkspaceImageRequestPrivate;

class QTAWSWORKSPACES_EXPORT ImportWorkspaceImageRequest : public WorkSpacesRequest {

public:
    ImportWorkspaceImageRequest(const ImportWorkspaceImageRequest &other);
    ImportWorkspaceImageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportWorkspaceImageRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
