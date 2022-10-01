// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MWAARESPONSE_P_H
#define QTAWS_MWAARESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Mwaa {

class MwaaResponse;

class MwaaResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MwaaResponsePrivate(MwaaResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MwaaResponse)
    Q_DISABLE_COPY(MwaaResponsePrivate)

};

} // namespace Mwaa
} // namespace QtAws

#endif
