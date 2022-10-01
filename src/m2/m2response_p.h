// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_M2RESPONSE_P_H
#define QTAWS_M2RESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace M2 {

class M2Response;

class M2ResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit M2ResponsePrivate(M2Response * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(M2Response)
    Q_DISABLE_COPY(M2ResponsePrivate)

};

} // namespace M2
} // namespace QtAws

#endif
