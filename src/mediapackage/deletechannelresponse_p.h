// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECHANNELRESPONSE_P_H
#define QTAWS_DELETECHANNELRESPONSE_P_H

#include "mediapackageresponse_p.h"

namespace QtAws {
namespace MediaPackage {

class DeleteChannelResponse;

class DeleteChannelResponsePrivate : public MediaPackageResponsePrivate {

public:

    explicit DeleteChannelResponsePrivate(DeleteChannelResponse * const q);

    void parseDeleteChannelResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteChannelResponse)
    Q_DISABLE_COPY(DeleteChannelResponsePrivate)

};

} // namespace MediaPackage
} // namespace QtAws

#endif
