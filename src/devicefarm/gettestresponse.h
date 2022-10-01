// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTESTRESPONSE_H
#define QTAWS_GETTESTRESPONSE_H

#include "devicefarmresponse.h"
#include "gettestrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetTestResponsePrivate;

class QTAWSDEVICEFARM_EXPORT GetTestResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    GetTestResponse(const GetTestRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTestRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTestResponse)
    Q_DISABLE_COPY(GetTestResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
