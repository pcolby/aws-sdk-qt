// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTAGEREQUEST_H
#define QTAWS_GETSTAGEREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class GetStageRequestPrivate;

class QTAWSGAMESPARKS_EXPORT GetStageRequest : public GameSparksRequest {

public:
    GetStageRequest(const GetStageRequest &other);
    GetStageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStageRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
