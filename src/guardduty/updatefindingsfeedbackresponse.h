// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFINDINGSFEEDBACKRESPONSE_H
#define QTAWS_UPDATEFINDINGSFEEDBACKRESPONSE_H

#include "guarddutyresponse.h"
#include "updatefindingsfeedbackrequest.h"

namespace QtAws {
namespace GuardDuty {

class UpdateFindingsFeedbackResponsePrivate;

class QTAWSGUARDDUTY_EXPORT UpdateFindingsFeedbackResponse : public GuardDutyResponse {
    Q_OBJECT

public:
    UpdateFindingsFeedbackResponse(const UpdateFindingsFeedbackRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateFindingsFeedbackRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFindingsFeedbackResponse)
    Q_DISABLE_COPY(UpdateFindingsFeedbackResponse)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
