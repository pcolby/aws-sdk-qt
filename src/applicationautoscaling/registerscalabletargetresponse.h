// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERSCALABLETARGETRESPONSE_H
#define QTAWS_REGISTERSCALABLETARGETRESPONSE_H

#include "applicationautoscalingresponse.h"
#include "registerscalabletargetrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class RegisterScalableTargetResponsePrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT RegisterScalableTargetResponse : public ApplicationAutoScalingResponse {
    Q_OBJECT

public:
    RegisterScalableTargetResponse(const RegisterScalableTargetRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterScalableTargetRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterScalableTargetResponse)
    Q_DISABLE_COPY(RegisterScalableTargetResponse)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
