// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTNERRESPONSE_H
#define QTAWS_DELETEPARTNERRESPONSE_H

#include "redshiftresponse.h"
#include "deletepartnerrequest.h"

namespace QtAws {
namespace Redshift {

class DeletePartnerResponsePrivate;

class QTAWSREDSHIFT_EXPORT DeletePartnerResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DeletePartnerResponse(const DeletePartnerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeletePartnerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePartnerResponse)
    Q_DISABLE_COPY(DeletePartnerResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
