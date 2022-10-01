// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPREFETCHSCHEDULERESPONSE_H
#define QTAWS_GETPREFETCHSCHEDULERESPONSE_H

#include "mediatailorresponse.h"
#include "getprefetchschedulerequest.h"

namespace QtAws {
namespace MediaTailor {

class GetPrefetchScheduleResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT GetPrefetchScheduleResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    GetPrefetchScheduleResponse(const GetPrefetchScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetPrefetchScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetPrefetchScheduleResponse)
    Q_DISABLE_COPY(GetPrefetchScheduleResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
