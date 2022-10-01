// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONDITIONALFORWARDERRESPONSE_P_H
#define QTAWS_UPDATECONDITIONALFORWARDERRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class UpdateConditionalForwarderResponse;

class UpdateConditionalForwarderResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit UpdateConditionalForwarderResponsePrivate(UpdateConditionalForwarderResponse * const q);

    void parseUpdateConditionalForwarderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConditionalForwarderResponse)
    Q_DISABLE_COPY(UpdateConditionalForwarderResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
