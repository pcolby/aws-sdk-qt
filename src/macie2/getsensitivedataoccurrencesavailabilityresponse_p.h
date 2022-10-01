// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSENSITIVEDATAOCCURRENCESAVAILABILITYRESPONSE_P_H
#define QTAWS_GETSENSITIVEDATAOCCURRENCESAVAILABILITYRESPONSE_P_H

#include "macie2response_p.h"

namespace QtAws {
namespace Macie2 {

class GetSensitiveDataOccurrencesAvailabilityResponse;

class GetSensitiveDataOccurrencesAvailabilityResponsePrivate : public Macie2ResponsePrivate {

public:

    explicit GetSensitiveDataOccurrencesAvailabilityResponsePrivate(GetSensitiveDataOccurrencesAvailabilityResponse * const q);

    void parseGetSensitiveDataOccurrencesAvailabilityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSensitiveDataOccurrencesAvailabilityResponse)
    Q_DISABLE_COPY(GetSensitiveDataOccurrencesAvailabilityResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
