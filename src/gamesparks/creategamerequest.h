// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGAMEREQUEST_H
#define QTAWS_CREATEGAMEREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class CreateGameRequestPrivate;

class QTAWSGAMESPARKS_EXPORT CreateGameRequest : public GameSparksRequest {

public:
    CreateGameRequest(const CreateGameRequest &other);
    CreateGameRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGameRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
