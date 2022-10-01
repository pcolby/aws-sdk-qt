// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYSPACEREQUEST_H
#define QTAWS_CREATEKEYSPACEREQUEST_H

#include "keyspacesrequest.h"

namespace QtAws {
namespace Keyspaces {

class CreateKeyspaceRequestPrivate;

class QTAWSKEYSPACES_EXPORT CreateKeyspaceRequest : public KeyspacesRequest {

public:
    CreateKeyspaceRequest(const CreateKeyspaceRequest &other);
    CreateKeyspaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateKeyspaceRequest)

};

} // namespace Keyspaces
} // namespace QtAws

#endif
