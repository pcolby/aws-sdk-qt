// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGELIMITRESPONSE_H
#define QTAWS_CREATEUSAGELIMITRESPONSE_H

#include "redshiftresponse.h"
#include "createusagelimitrequest.h"

namespace QtAws {
namespace Redshift {

class CreateUsageLimitResponsePrivate;

class QTAWSREDSHIFT_EXPORT CreateUsageLimitResponse : public RedshiftResponse {
    Q_OBJECT

public:
    CreateUsageLimitResponse(const CreateUsageLimitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUsageLimitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUsageLimitResponse)
    Q_DISABLE_COPY(CreateUsageLimitResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
