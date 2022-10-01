// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTERESPONSE_H
#define QTAWS_CREATEROUTERESPONSE_H

#include "ec2response.h"
#include "createrouterequest.h"

namespace QtAws {
namespace Ec2 {

class CreateRouteResponsePrivate;

class QTAWSEC2_EXPORT CreateRouteResponse : public Ec2Response {
    Q_OBJECT

public:
    CreateRouteResponse(const CreateRouteRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateRouteRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateRouteResponse)
    Q_DISABLE_COPY(CreateRouteResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
