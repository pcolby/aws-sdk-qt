// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACEROUTERESPONSE_H
#define QTAWS_REPLACEROUTERESPONSE_H

#include "ec2response.h"
#include "replacerouterequest.h"

namespace QtAws {
namespace Ec2 {

class ReplaceRouteResponsePrivate;

class QTAWSEC2_EXPORT ReplaceRouteResponse : public Ec2Response {
    Q_OBJECT

public:
    ReplaceRouteResponse(const ReplaceRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ReplaceRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReplaceRouteResponse)
    Q_DISABLE_COPY(ReplaceRouteResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
