// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STSRESPONSE_P_H
#define QTAWS_STSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Sts {

class StsResponse;

class StsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit StsResponsePrivate(StsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StsResponse)
    Q_DISABLE_COPY(StsResponsePrivate)

};

} // namespace Sts
} // namespace QtAws

#endif
