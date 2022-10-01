// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FMSRESPONSE_P_H
#define QTAWS_FMSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Fms {

class FmsResponse;

class FmsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit FmsResponsePrivate(FmsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(FmsResponse)
    Q_DISABLE_COPY(FmsResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
