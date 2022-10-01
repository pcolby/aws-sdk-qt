// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGAMESESSIONREQUEST_H
#define QTAWS_UPDATEGAMESESSIONREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class UpdateGameSessionRequestPrivate;

class QTAWSGAMELIFT_EXPORT UpdateGameSessionRequest : public GameLiftRequest {

public:
    UpdateGameSessionRequest(const UpdateGameSessionRequest &other);
    UpdateGameSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGameSessionRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
