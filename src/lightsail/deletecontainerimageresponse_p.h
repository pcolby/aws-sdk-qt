// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONTAINERIMAGERESPONSE_P_H
#define QTAWS_DELETECONTAINERIMAGERESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DeleteContainerImageResponse;

class DeleteContainerImageResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DeleteContainerImageResponsePrivate(DeleteContainerImageResponse * const q);

    void parseDeleteContainerImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteContainerImageResponse)
    Q_DISABLE_COPY(DeleteContainerImageResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
