// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEAUTHORIZEDATASHARERESPONSE_H
#define QTAWS_DEAUTHORIZEDATASHARERESPONSE_H

#include "redshiftresponse.h"
#include "deauthorizedatasharerequest.h"

namespace QtAws {
namespace Redshift {

class DeauthorizeDataShareResponsePrivate;

class QTAWSREDSHIFT_EXPORT DeauthorizeDataShareResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DeauthorizeDataShareResponse(const DeauthorizeDataShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeauthorizeDataShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeauthorizeDataShareResponse)
    Q_DISABLE_COPY(DeauthorizeDataShareResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
