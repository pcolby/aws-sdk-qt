// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTIONALIASREQUEST_H
#define QTAWS_CREATECONNECTIONALIASREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class CreateConnectionAliasRequestPrivate;

class QTAWSWORKSPACES_EXPORT CreateConnectionAliasRequest : public WorkSpacesRequest {

public:
    CreateConnectionAliasRequest(const CreateConnectionAliasRequest &other);
    CreateConnectionAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateConnectionAliasRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
