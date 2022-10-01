// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUDITSUPPRESSIONRESPONSE_H
#define QTAWS_CREATEAUDITSUPPRESSIONRESPONSE_H

#include "iotresponse.h"
#include "createauditsuppressionrequest.h"

namespace QtAws {
namespace IoT {

class CreateAuditSuppressionResponsePrivate;

class QTAWSIOT_EXPORT CreateAuditSuppressionResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateAuditSuppressionResponse(const CreateAuditSuppressionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAuditSuppressionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAuditSuppressionResponse)
    Q_DISABLE_COPY(CreateAuditSuppressionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
