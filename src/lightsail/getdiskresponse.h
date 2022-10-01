// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISKRESPONSE_H
#define QTAWS_GETDISKRESPONSE_H

#include "lightsailresponse.h"
#include "getdiskrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDiskResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetDiskResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetDiskResponse(const GetDiskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDiskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDiskResponse)
    Q_DISABLE_COPY(GetDiskResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
