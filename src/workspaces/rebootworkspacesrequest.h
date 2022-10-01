// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REBOOTWORKSPACESREQUEST_H
#define QTAWS_REBOOTWORKSPACESREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class RebootWorkspacesRequestPrivate;

class QTAWSWORKSPACES_EXPORT RebootWorkspacesRequest : public WorkSpacesRequest {

public:
    RebootWorkspacesRequest(const RebootWorkspacesRequest &other);
    RebootWorkspacesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RebootWorkspacesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
