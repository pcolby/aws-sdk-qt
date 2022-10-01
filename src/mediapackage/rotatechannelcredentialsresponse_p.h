// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROTATECHANNELCREDENTIALSRESPONSE_P_H
#define QTAWS_ROTATECHANNELCREDENTIALSRESPONSE_P_H

#include "mediapackageresponse_p.h"

namespace QtAws {
namespace MediaPackage {

class RotateChannelCredentialsResponse;

class RotateChannelCredentialsResponsePrivate : public MediaPackageResponsePrivate {

public:

    explicit RotateChannelCredentialsResponsePrivate(RotateChannelCredentialsResponse * const q);

    void parseRotateChannelCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RotateChannelCredentialsResponse)
    Q_DISABLE_COPY(RotateChannelCredentialsResponsePrivate)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
