// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INSPECTORRESPONSE_P_H
#define QTAWS_INSPECTORRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Inspector {

class InspectorResponse;

class InspectorResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit InspectorResponsePrivate(InspectorResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InspectorResponse)
    Q_DISABLE_COPY(InspectorResponsePrivate)

};

} // namespace Inspector
} // namespace QtAws

#endif
