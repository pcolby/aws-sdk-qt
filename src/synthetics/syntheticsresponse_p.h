// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SYNTHETICSRESPONSE_P_H
#define QTAWS_SYNTHETICSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Synthetics {

class SyntheticsResponse;

class SyntheticsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SyntheticsResponsePrivate(SyntheticsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SyntheticsResponse)
    Q_DISABLE_COPY(SyntheticsResponsePrivate)

};

} // namespace Synthetics
} // namespace QtAws

#endif
