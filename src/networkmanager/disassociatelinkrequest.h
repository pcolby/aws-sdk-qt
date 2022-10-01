// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATELINKREQUEST_H
#define QTAWS_DISASSOCIATELINKREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DisassociateLinkRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT DisassociateLinkRequest : public NetworkManagerRequest {

public:
    DisassociateLinkRequest(const DisassociateLinkRequest &other);
    DisassociateLinkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateLinkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
