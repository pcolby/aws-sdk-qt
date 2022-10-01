// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHINSTANCESRESPONSE_H
#define QTAWS_ATTACHINSTANCESRESPONSE_H

#include "autoscalingresponse.h"
#include "attachinstancesrequest.h"

namespace QtAws {
namespace AutoScaling {

class AttachInstancesResponsePrivate;

class QTAWSAUTOSCALING_EXPORT AttachInstancesResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    AttachInstancesResponse(const AttachInstancesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachInstancesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachInstancesResponse)
    Q_DISABLE_COPY(AttachInstancesResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
