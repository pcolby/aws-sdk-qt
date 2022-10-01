// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULERESPONSE_H
#define QTAWS_DELETESCHEDULERESPONSE_H

#include "databrewresponse.h"
#include "deleteschedulerequest.h"

namespace QtAws {
namespace DataBrew {

class DeleteScheduleResponsePrivate;

class QTAWSDATABREW_EXPORT DeleteScheduleResponse : public DataBrewResponse {
    Q_OBJECT

public:
    DeleteScheduleResponse(const DeleteScheduleRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteScheduleRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteScheduleResponse)
    Q_DISABLE_COPY(DeleteScheduleResponse)

};

} // namespace DataBrew
} // namespace QtAws

#endif
