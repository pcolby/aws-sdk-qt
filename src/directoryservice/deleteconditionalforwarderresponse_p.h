// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONDITIONALFORWARDERRESPONSE_P_H
#define QTAWS_DELETECONDITIONALFORWARDERRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DeleteConditionalForwarderResponse;

class DeleteConditionalForwarderResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DeleteConditionalForwarderResponsePrivate(DeleteConditionalForwarderResponse * const q);

    void parseDeleteConditionalForwarderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConditionalForwarderResponse)
    Q_DISABLE_COPY(DeleteConditionalForwarderResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
