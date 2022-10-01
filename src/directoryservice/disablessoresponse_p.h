// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESSORESPONSE_P_H
#define QTAWS_DISABLESSORESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DisableSsoResponse;

class DisableSsoResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DisableSsoResponsePrivate(DisableSsoResponse * const q);

    void parseDisableSsoResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableSsoResponse)
    Q_DISABLE_COPY(DisableSsoResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
