// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SNSRESPONSE_P_H
#define QTAWS_SNSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Sns {

class SnsResponse;

class SnsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit SnsResponsePrivate(SnsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SnsResponse)
    Q_DISABLE_COPY(SnsResponsePrivate)

};

} // namespace Sns
} // namespace QtAws

#endif
