// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKEREDGERESPONSE_P_H
#define QTAWS_SAGEMAKEREDGERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace SagemakerEdge {

class SagemakerEdgeResponse;

class SagemakerEdgeResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SagemakerEdgeResponsePrivate(SagemakerEdgeResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SagemakerEdgeResponse)
    Q_DISABLE_COPY(SagemakerEdgeResponsePrivate)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
