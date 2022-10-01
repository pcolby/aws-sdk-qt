// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEDULERESPONSE_H
#define QTAWS_UPDATESCHEDULERESPONSE_H

#include "databrewresponse.h"
#include "updateschedulerequest.h"

namespace QtAws {
namespace DataBrew {

class UpdateScheduleResponsePrivate;

class QTAWSDATABREW_EXPORT UpdateScheduleResponse : public DataBrewResponse {
    Q_OBJECT

public:
    UpdateScheduleResponse(const UpdateScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateScheduleResponse)
    Q_DISABLE_COPY(UpdateScheduleResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
