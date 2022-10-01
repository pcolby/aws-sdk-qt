// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPLICATIONINSTANCERESPONSE_P_H
#define QTAWS_CREATEAPPLICATIONINSTANCERESPONSE_P_H

#include "panoramaresponse_p.h"

namespace QtAws {
namespace Panorama {

class CreateApplicationInstanceResponse;

class CreateApplicationInstanceResponsePrivate : public PanoramaResponsePrivate {

public:

    explicit CreateApplicationInstanceResponsePrivate(CreateApplicationInstanceResponse * const q);

    void parseCreateApplicationInstanceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateApplicationInstanceResponse)
    Q_DISABLE_COPY(CreateApplicationInstanceResponsePrivate)

};

} // namespace Panorama
} // namespace QtAws

#endif
