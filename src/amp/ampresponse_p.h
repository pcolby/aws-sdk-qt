// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPRESPONSE_P_H
#define QTAWS_AMPRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Amp {

class AmpResponse;

class AmpResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AmpResponsePrivate(AmpResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AmpResponse)
    Q_DISABLE_COPY(AmpResponsePrivate)

};

} // namespace Amp
} // namespace QtAws

#endif
