// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SESRESPONSE_P_H
#define QTAWS_SESRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Ses {

class SesResponse;

class SesResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SesResponsePrivate(SesResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SesResponse)
    Q_DISABLE_COPY(SesResponsePrivate)

};

} // namespace Ses
} // namespace QtAws

#endif
