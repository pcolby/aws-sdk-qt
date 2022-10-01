// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECRRESPONSE_P_H
#define QTAWS_ECRRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Ecr {

class EcrResponse;

class EcrResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit EcrResponsePrivate(EcrResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EcrResponse)
    Q_DISABLE_COPY(EcrResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
