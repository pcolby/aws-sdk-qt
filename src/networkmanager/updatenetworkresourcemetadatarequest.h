// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKRESOURCEMETADATAREQUEST_H
#define QTAWS_UPDATENETWORKRESOURCEMETADATAREQUEST_H

#include "networkmanagerrequest.h"

namespace QtAws {
namespace NetworkManager {

class UpdateNetworkResourceMetadataRequestPrivate;

class QTAWSNETWORKMANAGER_EXPORT UpdateNetworkResourceMetadataRequest : public NetworkManagerRequest {

public:
    UpdateNetworkResourceMetadataRequest(const UpdateNetworkResourceMetadataRequest &other);
    UpdateNetworkResourceMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNetworkResourceMetadataRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
