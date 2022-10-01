// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GLOBALACCELERATORRESPONSE_P_H
#define QTAWS_GLOBALACCELERATORRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace GlobalAccelerator {

class GlobalAcceleratorResponse;

class GlobalAcceleratorResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit GlobalAcceleratorResponsePrivate(GlobalAcceleratorResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GlobalAcceleratorResponse)
    Q_DISABLE_COPY(GlobalAcceleratorResponsePrivate)

};

} // namespace GlobalAccelerator
} // namespace QtAws

#endif
