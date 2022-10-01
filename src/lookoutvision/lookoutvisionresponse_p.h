// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKOUTVISIONRESPONSE_P_H
#define QTAWS_LOOKOUTVISIONRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace LookoutVision {

class LookoutVisionResponse;

class LookoutVisionResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit LookoutVisionResponsePrivate(LookoutVisionResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LookoutVisionResponse)
    Q_DISABLE_COPY(LookoutVisionResponsePrivate)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
