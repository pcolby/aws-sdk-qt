// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MACIE2RESPONSE_P_H
#define QTAWS_MACIE2RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Macie2 {

class Macie2Response;

class Macie2ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit Macie2ResponsePrivate(Macie2Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(Macie2Response)
    Q_DISABLE_COPY(Macie2ResponsePrivate)

};

} // namespace Macie2
} // namespace QtAws

#endif
