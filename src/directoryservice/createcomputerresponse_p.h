// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMPUTERRESPONSE_P_H
#define QTAWS_CREATECOMPUTERRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class CreateComputerResponse;

class CreateComputerResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit CreateComputerResponsePrivate(CreateComputerResponse * const q);

    void parseCreateComputerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateComputerResponse)
    Q_DISABLE_COPY(CreateComputerResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
