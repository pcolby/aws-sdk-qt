// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPREFETCHSCHEDULERESPONSE_H
#define QTAWS_DELETEPREFETCHSCHEDULERESPONSE_H

#include "mediatailorresponse.h"
#include "deleteprefetchschedulerequest.h"

namespace QtAws {
namespace MediaTailor {

class DeletePrefetchScheduleResponsePrivate;

class QTAWSMEDIATAILOR_EXPORT DeletePrefetchScheduleResponse : public MediaTailorResponse {
    Q_OBJECT

public:
    DeletePrefetchScheduleResponse(const DeletePrefetchScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePrefetchScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePrefetchScheduleResponse)
    Q_DISABLE_COPY(DeletePrefetchScheduleResponse)

};

} // namespace MediaTailor
} // namespace QtAws

#endif
