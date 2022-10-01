// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGAMEREQUEST_H
#define QTAWS_GETGAMEREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class GetGameRequestPrivate;

class QTAWSGAMESPARKS_EXPORT GetGameRequest : public GameSparksRequest {

public:
    GetGameRequest(const GetGameRequest &other);
    GetGameRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGameRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
