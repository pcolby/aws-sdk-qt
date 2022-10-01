// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPRUNRESPONSE_H
#define QTAWS_STOPRUNRESPONSE_H

#include "devicefarmresponse.h"
#include "stoprunrequest.h"

namespace QtAws {
namespace DeviceFarm {

class StopRunResponsePrivate;

class QTAWSDEVICEFARM_EXPORT StopRunResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    StopRunResponse(const StopRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopRunResponse)
    Q_DISABLE_COPY(StopRunResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
