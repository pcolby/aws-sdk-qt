// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOLUMERESPONSE_P_H
#define QTAWS_DELETEVOLUMERESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class DeleteVolumeResponse;

class DeleteVolumeResponsePrivate : public FSxResponsePrivate {

public:

    explicit DeleteVolumeResponsePrivate(DeleteVolumeResponse * const q);

    void parseDeleteVolumeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVolumeResponse)
    Q_DISABLE_COPY(DeleteVolumeResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
