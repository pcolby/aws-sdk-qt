// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OUTPOSTSRESPONSE_P_H
#define QTAWS_OUTPOSTSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Outposts {

class OutpostsResponse;

class OutpostsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit OutpostsResponsePrivate(OutpostsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(OutpostsResponse)
    Q_DISABLE_COPY(OutpostsResponsePrivate)

};

} // namespace Outposts
} // namespace QtAws

#endif
