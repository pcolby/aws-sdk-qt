// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCHECKLAYERAVAILABILITYRESPONSE_H
#define QTAWS_BATCHCHECKLAYERAVAILABILITYRESPONSE_H

#include "ecrresponse.h"
#include "batchchecklayeravailabilityrequest.h"

namespace QtAws {
namespace Ecr {

class BatchCheckLayerAvailabilityResponsePrivate;

class QTAWSECR_EXPORT BatchCheckLayerAvailabilityResponse : public EcrResponse {
    Q_OBJECT

public:
    BatchCheckLayerAvailabilityResponse(const BatchCheckLayerAvailabilityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchCheckLayerAvailabilityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchCheckLayerAvailabilityResponse)
    Q_DISABLE_COPY(BatchCheckLayerAvailabilityResponse)

};

} // namespace Ecr
} // namespace QtAws

#endif
