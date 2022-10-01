// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPARTNERRESPONSE_P_H
#define QTAWS_ADDPARTNERRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class AddPartnerResponse;

class AddPartnerResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit AddPartnerResponsePrivate(AddPartnerResponse * const q);

    void parseAddPartnerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AddPartnerResponse)
    Q_DISABLE_COPY(AddPartnerResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
