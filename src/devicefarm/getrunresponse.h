// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRUNRESPONSE_H
#define QTAWS_GETRUNRESPONSE_H

#include "devicefarmresponse.h"
#include "getrunrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetRunResponsePrivate;

class QTAWSDEVICEFARM_EXPORT GetRunResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    GetRunResponse(const GetRunRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetRunRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetRunResponse)
    Q_DISABLE_COPY(GetRunResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
