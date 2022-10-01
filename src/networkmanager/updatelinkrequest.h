// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELINKREQUEST_H
#define QTAWS_UPDATELINKREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class UpdateLinkRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT UpdateLinkRequest : public NetworkManagerRequest {

public:
    UpdateLinkRequest(const UpdateLinkRequest &other);
    UpdateLinkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateLinkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
