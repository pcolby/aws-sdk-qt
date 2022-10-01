// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTAGEREQUEST_H
#define QTAWS_CREATESTAGEREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class CreateStageRequestPrivate;

class QTAWSGAMESPARKS_EXPORT CreateStageRequest : public GameSparksRequest {

public:
    CreateStageRequest(const CreateStageRequest &other);
    CreateStageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStageRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
