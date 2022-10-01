// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTNERRESPONSE_P_H
#define QTAWS_DELETEPARTNERRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DeletePartnerResponse;

class DeletePartnerResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DeletePartnerResponsePrivate(DeletePartnerResponse * const q);

    void parseDeletePartnerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeletePartnerResponse)
    Q_DISABLE_COPY(DeletePartnerResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
