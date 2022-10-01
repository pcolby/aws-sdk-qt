// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPARTNERRESPONSE_H
#define QTAWS_ADDPARTNERRESPONSE_H

#include "redshiftresponse.h"
#include "addpartnerrequest.h"

namespace QtAws {
namespace Redshift {

class AddPartnerResponsePrivate;

class QTAWSREDSHIFT_EXPORT AddPartnerResponse : public RedshiftResponse {
    Q_OBJECT

public:
    AddPartnerResponse(const AddPartnerRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AddPartnerRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddPartnerResponse)
    Q_DISABLE_COPY(AddPartnerResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
