// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTENVIRONMENTACCOUNTCONNECTIONSREQUEST_H
#define QTAWS_LISTENVIRONMENTACCOUNTCONNECTIONSREQUEST_H

#include "protonrequest.h"

namespace QtAws {
namespace Proton {

class ListEnvironmentAccountConnectionsRequestPrivate;

class QTAWSPROTON_EXPORT ListEnvironmentAccountConnectionsRequest : public ProtonRequest {

public:
    ListEnvironmentAccountConnectionsRequest(const ListEnvironmentAccountConnectionsRequest &other);
    ListEnvironmentAccountConnectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListEnvironmentAccountConnectionsRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
