// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLAYERCONNECTIONSTATUSREQUEST_H
#define QTAWS_GETPLAYERCONNECTIONSTATUSREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class GetPlayerConnectionStatusRequestPrivate;

class QTAWSGAMESPARKS_EXPORT GetPlayerConnectionStatusRequest : public GameSparksRequest {

public:
    GetPlayerConnectionStatusRequest(const GetPlayerConnectionStatusRequest &other);
    GetPlayerConnectionStatusRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPlayerConnectionStatusRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
