// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEVGWROUTEPROPAGATIONRESPONSE_H
#define QTAWS_ENABLEVGWROUTEPROPAGATIONRESPONSE_H

#include "ec2response.h"
#include "enablevgwroutepropagationrequest.h"

namespace QtAws {
namespace Ec2 {

class EnableVgwRoutePropagationResponsePrivate;

class QTAWSEC2_EXPORT EnableVgwRoutePropagationResponse : public Ec2Response {
    Q_OBJECT

public:
    EnableVgwRoutePropagationResponse(const EnableVgwRoutePropagationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableVgwRoutePropagationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableVgwRoutePropagationResponse)
    Q_DISABLE_COPY(EnableVgwRoutePropagationResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
