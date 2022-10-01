// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVEALIASREQUEST_H
#define QTAWS_RESOLVEALIASREQUEST_H

#include "gameliftrequest.h"

namespace QtAws {
namespace GameLift {

class ResolveAliasRequestPrivate;

class QTAWSGAMELIFT_EXPORT ResolveAliasRequest : public GameLiftRequest {

public:
    ResolveAliasRequest(const ResolveAliasRequest &other);
    ResolveAliasRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResolveAliasRequest)

};

} // namespace GameLift
} // namespace QtAws

#endif
