// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEVGWROUTEPROPAGATIONRESPONSE_H
#define QTAWS_DISABLEVGWROUTEPROPAGATIONRESPONSE_H

#include "ec2response.h"
#include "disablevgwroutepropagationrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableVgwRoutePropagationResponsePrivate;

class QTAWSEC2_EXPORT DisableVgwRoutePropagationResponse : public Ec2Response {
    Q_OBJECT

public:
    DisableVgwRoutePropagationResponse(const DisableVgwRoutePropagationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableVgwRoutePropagationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableVgwRoutePropagationResponse)
    Q_DISABLE_COPY(DisableVgwRoutePropagationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
