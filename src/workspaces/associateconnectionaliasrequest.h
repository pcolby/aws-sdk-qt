// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONNECTIONALIASREQUEST_H
#define QTAWS_ASSOCIATECONNECTIONALIASREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class AssociateConnectionAliasRequestPrivate;

class QTAWSWORKSPACES_EXPORT AssociateConnectionAliasRequest : public WorkSpacesRequest {

public:
    AssociateConnectionAliasRequest(const AssociateConnectionAliasRequest &other);
    AssociateConnectionAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateConnectionAliasRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
