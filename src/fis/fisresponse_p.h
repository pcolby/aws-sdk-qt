// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FISRESPONSE_P_H
#define QTAWS_FISRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Fis {

class FisResponse;

class FisResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit FisResponsePrivate(FisResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FisResponse)
    Q_DISABLE_COPY(FisResponsePrivate)

};

} // namespace Fis
} // namespace QtAws

#endif
