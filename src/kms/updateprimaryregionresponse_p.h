// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPRIMARYREGIONRESPONSE_P_H
#define QTAWS_UPDATEPRIMARYREGIONRESPONSE_P_H

#include "kmsresponse_p.h"

namespace QtAws {
namespace Kms {

class UpdatePrimaryRegionResponse;

class UpdatePrimaryRegionResponsePrivate : public KmsResponsePrivate {

public:

    explicit UpdatePrimaryRegionResponsePrivate(UpdatePrimaryRegionResponse * const q);

    void parseUpdatePrimaryRegionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePrimaryRegionResponse)
    Q_DISABLE_COPY(UpdatePrimaryRegionResponsePrivate)

};

} // namespace Kms
} // namespace QtAws

#endif
