// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDESIREDCAPACITYRESPONSE_H
#define QTAWS_SETDESIREDCAPACITYRESPONSE_H

#include "autoscalingresponse.h"
#include "setdesiredcapacityrequest.h"

namespace QtAws {
namespace AutoScaling {

class SetDesiredCapacityResponsePrivate;

class QTAWSAUTOSCALING_EXPORT SetDesiredCapacityResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    SetDesiredCapacityResponse(const SetDesiredCapacityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SetDesiredCapacityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetDesiredCapacityResponse)
    Q_DISABLE_COPY(SetDesiredCapacityResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
