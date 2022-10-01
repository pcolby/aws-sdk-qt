// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTDATASHARERESPONSE_H
#define QTAWS_REJECTDATASHARERESPONSE_H

#include "redshiftresponse.h"
#include "rejectdatasharerequest.h"

namespace QtAws {
namespace Redshift {

class RejectDataShareResponsePrivate;

class QTAWSREDSHIFT_EXPORT RejectDataShareResponse : public RedshiftResponse {
    Q_OBJECT

public:
    RejectDataShareResponse(const RejectDataShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectDataShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectDataShareResponse)
    Q_DISABLE_COPY(RejectDataShareResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
