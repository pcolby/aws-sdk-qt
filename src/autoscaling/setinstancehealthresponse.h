// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETINSTANCEHEALTHRESPONSE_H
#define QTAWS_SETINSTANCEHEALTHRESPONSE_H

#include "autoscalingresponse.h"
#include "setinstancehealthrequest.h"

namespace QtAws {
namespace AutoScaling {

class SetInstanceHealthResponsePrivate;

class QTAWSAUTOSCALING_EXPORT SetInstanceHealthResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    SetInstanceHealthResponse(const SetInstanceHealthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetInstanceHealthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetInstanceHealthResponse)
    Q_DISABLE_COPY(SetInstanceHealthResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
