// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MACIERESPONSE_P_H
#define QTAWS_MACIERESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Macie {

class MacieResponse;

class MacieResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MacieResponsePrivate(MacieResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MacieResponse)
    Q_DISABLE_COPY(MacieResponsePrivate)

};

} // namespace Macie
} // namespace QtAws

#endif
