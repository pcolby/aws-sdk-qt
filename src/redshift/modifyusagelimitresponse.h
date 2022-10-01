// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYUSAGELIMITRESPONSE_H
#define QTAWS_MODIFYUSAGELIMITRESPONSE_H

#include "redshiftresponse.h"
#include "modifyusagelimitrequest.h"

namespace QtAws {
namespace Redshift {

class ModifyUsageLimitResponsePrivate;

class QTAWSREDSHIFT_EXPORT ModifyUsageLimitResponse : public RedshiftResponse {
    Q_OBJECT

public:
    ModifyUsageLimitResponse(const ModifyUsageLimitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyUsageLimitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyUsageLimitResponse)
    Q_DISABLE_COPY(ModifyUsageLimitResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
