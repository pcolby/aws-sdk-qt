// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHOURSOFOPERATIONRESPONSE_H
#define QTAWS_DELETEHOURSOFOPERATIONRESPONSE_H

#include "connectresponse.h"
#include "deletehoursofoperationrequest.h"

namespace QtAws {
namespace Connect {

class DeleteHoursOfOperationResponsePrivate;

class QTAWSCONNECT_EXPORT DeleteHoursOfOperationResponse : public ConnectResponse {
    Q_OBJECT

public:
    DeleteHoursOfOperationResponse(const DeleteHoursOfOperationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteHoursOfOperationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHoursOfOperationResponse)
    Q_DISABLE_COPY(DeleteHoursOfOperationResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
