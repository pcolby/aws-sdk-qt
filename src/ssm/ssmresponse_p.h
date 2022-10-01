// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSMRESPONSE_P_H
#define QTAWS_SSMRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Ssm {

class SsmResponse;

class SsmResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SsmResponsePrivate(SsmResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SsmResponse)
    Q_DISABLE_COPY(SsmResponsePrivate)

};

} // namespace Ssm
} // namespace QtAws

#endif
