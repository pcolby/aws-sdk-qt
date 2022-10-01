// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMITIGATIONACTIONRESPONSE_H
#define QTAWS_UPDATEMITIGATIONACTIONRESPONSE_H

#include "iotresponse.h"
#include "updatemitigationactionrequest.h"

namespace QtAws {
namespace IoT {

class UpdateMitigationActionResponsePrivate;

class QTAWSIOT_EXPORT UpdateMitigationActionResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateMitigationActionResponse(const UpdateMitigationActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMitigationActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMitigationActionResponse)
    Q_DISABLE_COPY(UpdateMitigationActionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
