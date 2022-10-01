// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EMRCONTAINERSRESPONSE_P_H
#define QTAWS_EMRCONTAINERSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Emrcontainers {

class EmrcontainersResponse;

class EmrcontainersResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit EmrcontainersResponsePrivate(EmrcontainersResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EmrcontainersResponse)
    Q_DISABLE_COPY(EmrcontainersResponsePrivate)

};

} // namespace Emrcontainers
} // namespace QtAws

#endif
