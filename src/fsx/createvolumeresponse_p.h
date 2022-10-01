// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOLUMERESPONSE_P_H
#define QTAWS_CREATEVOLUMERESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class CreateVolumeResponse;

class CreateVolumeResponsePrivate : public FSxResponsePrivate {

public:

    explicit CreateVolumeResponsePrivate(CreateVolumeResponse * const q);

    void parseCreateVolumeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVolumeResponse)
    Q_DISABLE_COPY(CreateVolumeResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
