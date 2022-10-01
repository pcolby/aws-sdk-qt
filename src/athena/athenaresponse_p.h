// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATHENARESPONSE_P_H
#define QTAWS_ATHENARESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Athena {

class AthenaResponse;

class AthenaResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit AthenaResponsePrivate(AthenaResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AthenaResponse)
    Q_DISABLE_COPY(AthenaResponsePrivate)

};

} // namespace Athena
} // namespace QtAws

#endif
