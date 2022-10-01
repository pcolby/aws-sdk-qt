// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSTAGEDEPLOYMENTSREQUEST_H
#define QTAWS_LISTSTAGEDEPLOYMENTSREQUEST_H

#include "gamesparksrequest.h"

namespace QtAws {
namespace GameSparks {

class ListStageDeploymentsRequestPrivate;

class QTAWSGAMESPARKS_EXPORT ListStageDeploymentsRequest : public GameSparksRequest {

public:
    ListStageDeploymentsRequest(const ListStageDeploymentsRequest &other);
    ListStageDeploymentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListStageDeploymentsRequest)

};

} // namespace GameSparks
} // namespace QtAws

#endif
