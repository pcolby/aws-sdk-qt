/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
