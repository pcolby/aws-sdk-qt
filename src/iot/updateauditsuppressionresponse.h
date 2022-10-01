// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUDITSUPPRESSIONRESPONSE_H
#define QTAWS_UPDATEAUDITSUPPRESSIONRESPONSE_H

#include "iotresponse.h"
#include "updateauditsuppressionrequest.h"

namespace QtAws {
namespace IoT {

class UpdateAuditSuppressionResponsePrivate;

class QTAWSIOT_EXPORT UpdateAuditSuppressionResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateAuditSuppressionResponse(const UpdateAuditSuppressionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAuditSuppressionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAuditSuppressionResponse)
    Q_DISABLE_COPY(UpdateAuditSuppressionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
