// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCHEDULEDACTIONRESPONSE_H
#define QTAWS_PUTSCHEDULEDACTIONRESPONSE_H

#include "applicationautoscalingresponse.h"
#include "putscheduledactionrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class PutScheduledActionResponsePrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT PutScheduledActionResponse : public ApplicationAutoScalingResponse {
    Q_OBJECT

public:
    PutScheduledActionResponse(const PutScheduledActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutScheduledActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutScheduledActionResponse)
    Q_DISABLE_COPY(PutScheduledActionResponse)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
