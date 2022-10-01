// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERSCALABLETARGETRESPONSE_H
#define QTAWS_DEREGISTERSCALABLETARGETRESPONSE_H

#include "applicationautoscalingresponse.h"
#include "deregisterscalabletargetrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DeregisterScalableTargetResponsePrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT DeregisterScalableTargetResponse : public ApplicationAutoScalingResponse {
    Q_OBJECT

public:
    DeregisterScalableTargetResponse(const DeregisterScalableTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterScalableTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterScalableTargetResponse)
    Q_DISABLE_COPY(DeregisterScalableTargetResponse)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
