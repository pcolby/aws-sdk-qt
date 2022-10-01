// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EMRRESPONSE_P_H
#define QTAWS_EMRRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Emr {

class EmrResponse;

class EmrResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit EmrResponsePrivate(EmrResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EmrResponse)
    Q_DISABLE_COPY(EmrResponsePrivate)

};

} // namespace Emr
} // namespace QtAws

#endif
