// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETERESOURCESBYEXTERNALIDREQUEST_P_H
#define QTAWS_DELETERESOURCESBYEXTERNALIDREQUEST_P_H

#include "codedeployrequest_p.h"
#include "deleteresourcesbyexternalidrequest.h"

namespace QtAws {
namespace CodeDeploy {

class DeleteResourcesByExternalIdRequest;

class DeleteResourcesByExternalIdRequestPrivate : public CodeDeployRequestPrivate {

public:
    DeleteResourcesByExternalIdRequestPrivate(const CodeDeployRequest::Action action,
                                   DeleteResourcesByExternalIdRequest * const q);
    DeleteResourcesByExternalIdRequestPrivate(const DeleteResourcesByExternalIdRequestPrivate &other,
                                   DeleteResourcesByExternalIdRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteResourcesByExternalIdRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
