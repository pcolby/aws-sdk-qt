// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTESTGRIDSESSIONRESPONSE_H
#define QTAWS_GETTESTGRIDSESSIONRESPONSE_H

#include "devicefarmresponse.h"
#include "gettestgridsessionrequest.h"

namespace QtAws {
namespace DeviceFarm {

class GetTestGridSessionResponsePrivate;

class QTAWSDEVICEFARM_EXPORT GetTestGridSessionResponse : public DeviceFarmResponse {
    Q_OBJECT

public:
    GetTestGridSessionResponse(const GetTestGridSessionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTestGridSessionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTestGridSessionResponse)
    Q_DISABLE_COPY(GetTestGridSessionResponse)

};

} // namespace DeviceFarm
} // namespace QtAws

#endif
