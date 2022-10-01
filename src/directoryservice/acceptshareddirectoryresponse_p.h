// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTSHAREDDIRECTORYRESPONSE_P_H
#define QTAWS_ACCEPTSHAREDDIRECTORYRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class AcceptSharedDirectoryResponse;

class AcceptSharedDirectoryResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit AcceptSharedDirectoryResponsePrivate(AcceptSharedDirectoryResponse * const q);

    void parseAcceptSharedDirectoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AcceptSharedDirectoryResponse)
    Q_DISABLE_COPY(AcceptSharedDirectoryResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
