// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPREFETCHSCHEDULERESPONSE_H
#define QTAWS_CREATEPREFETCHSCHEDULERESPONSE_H

#include "mediatailorresponse.h"
#include "createprefetchschedulerequest.h"

namespace QtAws {
namespace MediaTailor {

class CreatePrefetchScheduleResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT CreatePrefetchScheduleResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    CreatePrefetchScheduleResponse(const CreatePrefetchScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreatePrefetchScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePrefetchScheduleResponse)
    Q_DISABLE_COPY(CreatePrefetchScheduleResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
