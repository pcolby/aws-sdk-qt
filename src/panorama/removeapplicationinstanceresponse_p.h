// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEAPPLICATIONINSTANCERESPONSE_P_H
#define QTAWS_REMOVEAPPLICATIONINSTANCERESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class RemoveApplicationInstanceResponse;

class RemoveApplicationInstanceResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit RemoveApplicationInstanceResponsePrivate(RemoveApplicationInstanceResponse * const q);

    void parseRemoveApplicationInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RemoveApplicationInstanceResponse)
    Q_DISABLE_COPY(RemoveApplicationInstanceResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif
