// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDCONTROLRESPONSE_P_H
#define QTAWS_CLOUDCONTROLRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace CloudControl {

class CloudControlResponse;

class CloudControlResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit CloudControlResponsePrivate(CloudControlResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CloudControlResponse)
    Q_DISABLE_COPY(CloudControlResponsePrivate)

};

} // namespace CloudControl
} // namespace QtAws

#endif
