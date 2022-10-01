// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOBMANIFESTRESPONSE_P_H
#define QTAWS_GETJOBMANIFESTRESPONSE_P_H

#include "snowballresponse_p.h"

namespace QtAws {
namespace Snowball {

class GetJobManifestResponse;

class GetJobManifestResponsePrivate : public SnowballResponsePrivate {

public:

    explicit GetJobManifestResponsePrivate(GetJobManifestResponse * const q);

    void parseGetJobManifestResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetJobManifestResponse)
    Q_DISABLE_COPY(GetJobManifestResponsePrivate)

};

} // namespace Snowball
} // namespace QtAws

#endif
