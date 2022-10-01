// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSAGELIMITRESPONSE_H
#define QTAWS_GETUSAGELIMITRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "getusagelimitrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class GetUsageLimitResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT GetUsageLimitResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    GetUsageLimitResponse(const GetUsageLimitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetUsageLimitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetUsageLimitResponse)
    Q_DISABLE_COPY(GetUsageLimitResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
