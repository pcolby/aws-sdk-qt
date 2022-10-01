// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELINKREQUEST_H
#define QTAWS_DELETELINKREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class DeleteLinkRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT DeleteLinkRequest : public NetworkManagerRequest {

public:
    DeleteLinkRequest(const DeleteLinkRequest &other);
    DeleteLinkRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteLinkRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
