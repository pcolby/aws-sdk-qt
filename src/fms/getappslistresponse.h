// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPSLISTRESPONSE_H
#define QTAWS_GETAPPSLISTRESPONSE_H

#include "fmsresponse.h"
#include "getappslistrequest.h"

namespace QtAws {
namespace Fms {

class GetAppsListResponsePrivate;

class QTAWSFMS_EXPORT GetAppsListResponse : public FmsResponse {
    Q_OBJECT

public:
    GetAppsListResponse(const GetAppsListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetAppsListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetAppsListResponse)
    Q_DISABLE_COPY(GetAppsListResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
