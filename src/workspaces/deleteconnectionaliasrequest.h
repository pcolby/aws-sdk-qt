// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTIONALIASREQUEST_H
#define QTAWS_DELETECONNECTIONALIASREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DeleteConnectionAliasRequestPrivate;

class QTAWSWORKSPACES_EXPORT DeleteConnectionAliasRequest : public WorkSpacesRequest {

public:
    DeleteConnectionAliasRequest(const DeleteConnectionAliasRequest &other);
    DeleteConnectionAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteConnectionAliasRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
