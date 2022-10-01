// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGAMESREQUEST_H
#define QTAWS_LISTGAMESREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class ListGamesRequestPrivate;

class QTAWSGAMESPARKS_EXPORT ListGamesRequest : public GameSparksRequest {

public:
    ListGamesRequest(const ListGamesRequest &other);
    ListGamesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGamesRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
