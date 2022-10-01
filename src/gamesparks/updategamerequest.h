// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMEREQUEST_H
#define QTAWS_UPDATEGAMEREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class UpdateGameRequestPrivate;

class QTAWSGAMESPARKS_EXPORT UpdateGameRequest : public GameSparksRequest {

public:
    UpdateGameRequest(const UpdateGameRequest &other);
    UpdateGameRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGameRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
