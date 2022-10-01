// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EKSRESPONSE_P_H
#define QTAWS_EKSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Eks {

class EksResponse;

class EksResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit EksResponsePrivate(EksResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EksResponse)
    Q_DISABLE_COPY(EksResponsePrivate)

};

} // namespace Eks
} // namespace QtAws

#endif
