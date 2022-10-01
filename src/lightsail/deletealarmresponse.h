// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALARMRESPONSE_H
#define QTAWS_DELETEALARMRESPONSE_H

#include "lightsailresponse.h"
#include "deletealarmrequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteAlarmResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteAlarmResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteAlarmResponse(const DeleteAlarmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAlarmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAlarmResponse)
    Q_DISABLE_COPY(DeleteAlarmResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
