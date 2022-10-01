// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHOURSOFOPERATIONRESPONSE_H
#define QTAWS_UPDATEHOURSOFOPERATIONRESPONSE_H

#include "connectresponse.h"
#include "updatehoursofoperationrequest.h"

namespace QtAws {
namespace Connect {

class UpdateHoursOfOperationResponsePrivate;

class QTAWSCONNECT_EXPORT UpdateHoursOfOperationResponse : public ConnectResponse {
    Q_OBJECT

public:
    UpdateHoursOfOperationResponse(const UpdateHoursOfOperationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateHoursOfOperationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHoursOfOperationResponse)
    Q_DISABLE_COPY(UpdateHoursOfOperationResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
