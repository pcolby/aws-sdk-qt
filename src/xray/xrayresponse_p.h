// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_XRAYRESPONSE_P_H
#define QTAWS_XRAYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace XRay {

class XRayResponse;

class XRayResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit XRayResponsePrivate(XRayResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(XRayResponse)
    Q_DISABLE_COPY(XRayResponsePrivate)

};

} // namespace XRay
} // namespace QtAws

#endif
