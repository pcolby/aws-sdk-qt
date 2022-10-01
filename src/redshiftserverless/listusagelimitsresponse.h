// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSAGELIMITSRESPONSE_H
#define QTAWS_LISTUSAGELIMITSRESPONSE_H

#include "redshiftserverlessresponse.h"
#include "listusagelimitsrequest.h"

namespace QtAws {
namespace RedshiftServerless {

class ListUsageLimitsResponsePrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT ListUsageLimitsResponse : public RedshiftServerlessResponse {
    Q_OBJECT

public:
    ListUsageLimitsResponse(const ListUsageLimitsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListUsageLimitsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListUsageLimitsResponse)
    Q_DISABLE_COPY(ListUsageLimitsResponse)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
