// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SHAREDIRECTORYRESPONSE_P_H
#define QTAWS_SHAREDIRECTORYRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class ShareDirectoryResponse;

class ShareDirectoryResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit ShareDirectoryResponsePrivate(ShareDirectoryResponse * const q);

    void parseShareDirectoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ShareDirectoryResponse)
    Q_DISABLE_COPY(ShareDirectoryResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
