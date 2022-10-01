// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELSCHEDULERESPONSE_H
#define QTAWS_GETCHANNELSCHEDULERESPONSE_H

#include "mediatailorresponse.h"
#include "getchannelschedulerequest.h"

namespace QtAws {
namespace MediaTailor {

class GetChannelScheduleResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT GetChannelScheduleResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    GetChannelScheduleResponse(const GetChannelScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetChannelScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetChannelScheduleResponse)
    Q_DISABLE_COPY(GetChannelScheduleResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
