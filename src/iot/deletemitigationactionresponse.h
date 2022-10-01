// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMITIGATIONACTIONRESPONSE_H
#define QTAWS_DELETEMITIGATIONACTIONRESPONSE_H

#include "iotresponse.h"
#include "deletemitigationactionrequest.h"

namespace QtAws {
namespace IoT {

class DeleteMitigationActionResponsePrivate;

class QTAWSIOT_EXPORT DeleteMitigationActionResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteMitigationActionResponse(const DeleteMitigationActionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMitigationActionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMitigationActionResponse)
    Q_DISABLE_COPY(DeleteMitigationActionResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
