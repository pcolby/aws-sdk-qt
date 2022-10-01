// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGELIMITRESPONSE_H
#define QTAWS_DELETEUSAGELIMITRESPONSE_H

#include "redshiftresponse.h"
#include "deleteusagelimitrequest.h"

namespace QtAws {
namespace Redshift {

class DeleteUsageLimitResponsePrivate;

class QTAWSREDSHIFT_EXPORT DeleteUsageLimitResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DeleteUsageLimitResponse(const DeleteUsageLimitRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUsageLimitRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUsageLimitResponse)
    Q_DISABLE_COPY(DeleteUsageLimitResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
