// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONNECTIONALIASREQUEST_H
#define QTAWS_DISASSOCIATECONNECTIONALIASREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DisassociateConnectionAliasRequestPrivate;

class QTAWSWORKSPACES_EXPORT DisassociateConnectionAliasRequest : public WorkSpacesRequest {

public:
    DisassociateConnectionAliasRequest(const DisassociateConnectionAliasRequest &other);
    DisassociateConnectionAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateConnectionAliasRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
