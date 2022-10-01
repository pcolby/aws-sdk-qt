// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDISKSRESPONSE_H
#define QTAWS_GETDISKSRESPONSE_H

#include "lightsailresponse.h"
#include "getdisksrequest.h"

namespace QtAws {
namespace Lightsail {

class GetDisksResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT GetDisksResponse : public LightsailResponse {
    Q_OBJECT

public:
    GetDisksResponse(const GetDisksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDisksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDisksResponse)
    Q_DISABLE_COPY(GetDisksResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
