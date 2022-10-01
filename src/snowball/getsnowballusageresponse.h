// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNOWBALLUSAGERESPONSE_H
#define QTAWS_GETSNOWBALLUSAGERESPONSE_H

#include "snowballresponse.h"
#include "getsnowballusagerequest.h"

namespace QtAws {
namespace Snowball {

class GetSnowballUsageResponsePrivate;

class QTAWSSNOWBALL_EXPORT GetSnowballUsageResponse : public SnowballResponse {
    Q_OBJECT

public:
    GetSnowballUsageResponse(const GetSnowballUsageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetSnowballUsageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSnowballUsageResponse)
    Q_DISABLE_COPY(GetSnowballUsageResponse)

};

} // namespace Snowball
} // namespace QtAws

#endif
