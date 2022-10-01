// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EFSRESPONSE_P_H
#define QTAWS_EFSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Efs {

class EfsResponse;

class EfsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit EfsResponsePrivate(EfsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EfsResponse)
    Q_DISABLE_COPY(EfsResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
