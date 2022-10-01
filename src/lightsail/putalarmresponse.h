// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTALARMRESPONSE_H
#define QTAWS_PUTALARMRESPONSE_H

#include "lightsailresponse.h"
#include "putalarmrequest.h"

namespace QtAws {
namespace Lightsail {

class PutAlarmResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT PutAlarmResponse : public LightsailResponse {
    Q_OBJECT

public:
    PutAlarmResponse(const PutAlarmRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAlarmRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAlarmResponse)
    Q_DISABLE_COPY(PutAlarmResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
