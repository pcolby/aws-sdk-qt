// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETINSTANCEPROTECTIONRESPONSE_H
#define QTAWS_SETINSTANCEPROTECTIONRESPONSE_H

#include "autoscalingresponse.h"
#include "setinstanceprotectionrequest.h"

namespace QtAws {
namespace AutoScaling {

class SetInstanceProtectionResponsePrivate;

class QTAWSAUTOSCALING_EXPORT SetInstanceProtectionResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    SetInstanceProtectionResponse(const SetInstanceProtectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetInstanceProtectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetInstanceProtectionResponse)
    Q_DISABLE_COPY(SetInstanceProtectionResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
