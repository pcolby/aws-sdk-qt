// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GREENGRASSRESPONSE_P_H
#define QTAWS_GREENGRASSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GreengrassResponse;

class GreengrassResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit GreengrassResponsePrivate(GreengrassResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GreengrassResponse)
    Q_DISABLE_COPY(GreengrassResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
