// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SHIELDRESPONSE_P_H
#define QTAWS_SHIELDRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Shield {

class ShieldResponse;

class ShieldResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ShieldResponsePrivate(ShieldResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ShieldResponse)
    Q_DISABLE_COPY(ShieldResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
