// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPARTNERSTATUSRESPONSE_H
#define QTAWS_UPDATEPARTNERSTATUSRESPONSE_H

#include "redshiftresponse.h"
#include "updatepartnerstatusrequest.h"

namespace QtAws {
namespace Redshift {

class UpdatePartnerStatusResponsePrivate;

class QTAWSREDSHIFT_EXPORT UpdatePartnerStatusResponse : public RedshiftResponse {
    Q_OBJECT

public:
    UpdatePartnerStatusResponse(const UpdatePartnerStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdatePartnerStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePartnerStatusResponse)
    Q_DISABLE_COPY(UpdatePartnerStatusResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
