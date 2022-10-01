// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULERESPONSE_H
#define QTAWS_CREATESCHEDULERESPONSE_H

#include "databrewresponse.h"
#include "createschedulerequest.h"

namespace QtAws {
namespace DataBrew {

class CreateScheduleResponsePrivate;

class QTAWSDATABREW_EXPORT CreateScheduleResponse : public DataBrewResponse {
    Q_OBJECT

public:
    CreateScheduleResponse(const CreateScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateScheduleResponse)
    Q_DISABLE_COPY(CreateScheduleResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
