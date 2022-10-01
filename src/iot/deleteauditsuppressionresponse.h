// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUDITSUPPRESSIONRESPONSE_H
#define QTAWS_DELETEAUDITSUPPRESSIONRESPONSE_H

#include "iotresponse.h"
#include "deleteauditsuppressionrequest.h"

namespace QtAws {
namespace IoT {

class DeleteAuditSuppressionResponsePrivate;

class QTAWSIOT_EXPORT DeleteAuditSuppressionResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteAuditSuppressionResponse(const DeleteAuditSuppressionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAuditSuppressionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAuditSuppressionResponse)
    Q_DISABLE_COPY(DeleteAuditSuppressionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
