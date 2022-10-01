// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONDITIONALFORWARDERRESPONSE_P_H
#define QTAWS_CREATECONDITIONALFORWARDERRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class CreateConditionalForwarderResponse;

class CreateConditionalForwarderResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit CreateConditionalForwarderResponsePrivate(CreateConditionalForwarderResponse * const q);

    void parseCreateConditionalForwarderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConditionalForwarderResponse)
    Q_DISABLE_COPY(CreateConditionalForwarderResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
