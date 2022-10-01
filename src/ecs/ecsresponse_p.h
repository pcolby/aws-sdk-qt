// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECSRESPONSE_P_H
#define QTAWS_ECSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Ecs {

class EcsResponse;

class EcsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit EcsResponsePrivate(EcsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EcsResponse)
    Q_DISABLE_COPY(EcsResponsePrivate)

};

} // namespace Ecs
} // namespace QtAws

#endif
