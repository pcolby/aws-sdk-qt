// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTECORENETWORKCHANGESETREQUEST_H
#define QTAWS_EXECUTECORENETWORKCHANGESETREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class ExecuteCoreNetworkChangeSetRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT ExecuteCoreNetworkChangeSetRequest : public NetworkManagerRequest {

public:
    ExecuteCoreNetworkChangeSetRequest(const ExecuteCoreNetworkChangeSetRequest &other);
    ExecuteCoreNetworkChangeSetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ExecuteCoreNetworkChangeSetRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
