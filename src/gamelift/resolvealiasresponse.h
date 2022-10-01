// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESOLVEALIASRESPONSE_H
#define QTAWS_RESOLVEALIASRESPONSE_H

#include "gameliftresponse.h"
#include "resolvealiasrequest.h"

namespace QtAws {
namespace GameLift {

class ResolveAliasResponsePrivate;

class QTAWSGAMELIFT_EXPORT ResolveAliasResponse : public GameLiftResponse {
    Q_OBJECT

public:
    ResolveAliasResponse(const ResolveAliasRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ResolveAliasRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ResolveAliasResponse)
    Q_DISABLE_COPY(ResolveAliasResponse)

};

} // namespace GameLift
} // namespace QtAws

#endif
