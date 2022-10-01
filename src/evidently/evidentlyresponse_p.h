// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EVIDENTLYRESPONSE_P_H
#define QTAWS_EVIDENTLYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Evidently {

class EvidentlyResponse;

class EvidentlyResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit EvidentlyResponsePrivate(EvidentlyResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EvidentlyResponse)
    Q_DISABLE_COPY(EvidentlyResponsePrivate)

};

} // namespace Evidently
} // namespace QtAws

#endif
