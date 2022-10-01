// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTSHAREDDIRECTORYRESPONSE_P_H
#define QTAWS_REJECTSHAREDDIRECTORYRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class RejectSharedDirectoryResponse;

class RejectSharedDirectoryResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit RejectSharedDirectoryResponsePrivate(RejectSharedDirectoryResponse * const q);

    void parseRejectSharedDirectoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RejectSharedDirectoryResponse)
    Q_DISABLE_COPY(RejectSharedDirectoryResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
