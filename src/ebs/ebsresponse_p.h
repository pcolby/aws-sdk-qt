// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EBSRESPONSE_P_H
#define QTAWS_EBSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Ebs {

class EbsResponse;

class EbsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit EbsResponsePrivate(EbsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EbsResponse)
    Q_DISABLE_COPY(EbsResponsePrivate)

};

} // namespace Ebs
} // namespace QtAws

#endif
