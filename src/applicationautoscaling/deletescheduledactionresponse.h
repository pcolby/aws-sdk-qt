// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEDACTIONRESPONSE_H
#define QTAWS_DELETESCHEDULEDACTIONRESPONSE_H

#include "applicationautoscalingresponse.h"
#include "deletescheduledactionrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DeleteScheduledActionResponsePrivate;

class QTAWSAPPLICATIONAUTOSCALING_EXPORT DeleteScheduledActionResponse : public ApplicationAutoScalingResponse {
    Q_OBJECT

public:
    DeleteScheduledActionResponse(const DeleteScheduledActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteScheduledActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteScheduledActionResponse)
    Q_DISABLE_COPY(DeleteScheduledActionResponse)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
