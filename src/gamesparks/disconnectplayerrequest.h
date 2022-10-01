// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISCONNECTPLAYERREQUEST_H
#define QTAWS_DISCONNECTPLAYERREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class DisconnectPlayerRequestPrivate;

class QTAWSGAMESPARKS_EXPORT DisconnectPlayerRequest : public GameSparksRequest {

public:
    DisconnectPlayerRequest(const DisconnectPlayerRequest &other);
    DisconnectPlayerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisconnectPlayerRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
