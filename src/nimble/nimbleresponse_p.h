// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_NIMBLERESPONSE_P_H
#define QTAWS_NIMBLERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Nimble {

class NimbleResponse;

class NimbleResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit NimbleResponsePrivate(NimbleResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(NimbleResponse)
    Q_DISABLE_COPY(NimbleResponsePrivate)

};

} // namespace Nimble
} // namespace QtAws

#endif
