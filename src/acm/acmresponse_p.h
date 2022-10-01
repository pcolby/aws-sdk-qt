// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACMRESPONSE_P_H
#define QTAWS_ACMRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Acm {

class AcmResponse;

class AcmResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AcmResponsePrivate(AcmResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcmResponse)
    Q_DISABLE_COPY(AcmResponsePrivate)

};

} // namespace Acm
} // namespace QtAws

#endif
