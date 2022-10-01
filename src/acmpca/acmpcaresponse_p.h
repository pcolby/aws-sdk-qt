// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACMPCARESPONSE_P_H
#define QTAWS_ACMPCARESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace AcmPca {

class AcmPcaResponse;

class AcmPcaResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AcmPcaResponsePrivate(AcmPcaResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcmPcaResponse)
    Q_DISABLE_COPY(AcmPcaResponsePrivate)

};

} // namespace AcmPca
} // namespace QtAws

#endif
