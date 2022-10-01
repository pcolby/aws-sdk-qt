// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTAPPSLISTRESPONSE_H
#define QTAWS_PUTAPPSLISTRESPONSE_H

#include "fmsresponse.h"
#include "putappslistrequest.h"

namespace QtAws {
namespace Fms {

class PutAppsListResponsePrivate;

class QTAWSFMS_EXPORT PutAppsListResponse : public FmsResponse {
    Q_OBJECT

public:
    PutAppsListResponse(const PutAppsListRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutAppsListRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutAppsListResponse)
    Q_DISABLE_COPY(PutAppsListResponse)

};

} // namespace Fms
} // namespace QtAws

#endif
