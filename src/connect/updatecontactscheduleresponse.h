// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTACTSCHEDULERESPONSE_H
#define QTAWS_UPDATECONTACTSCHEDULERESPONSE_H

#include "connectresponse.h"
#include "updatecontactschedulerequest.h"

namespace QtAws {
namespace Connect {

class UpdateContactScheduleResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateContactScheduleResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateContactScheduleResponse(const UpdateContactScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateContactScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContactScheduleResponse)
    Q_DISABLE_COPY(UpdateContactScheduleResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
