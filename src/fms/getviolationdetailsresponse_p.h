// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVIOLATIONDETAILSRESPONSE_P_H
#define QTAWS_GETVIOLATIONDETAILSRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class GetViolationDetailsResponse;

class GetViolationDetailsResponsePrivate : public FmsResponsePrivate {

public:

    explicit GetViolationDetailsResponsePrivate(GetViolationDetailsResponse * const q);

    void parseGetViolationDetailsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetViolationDetailsResponse)
    Q_DISABLE_COPY(GetViolationDetailsResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
