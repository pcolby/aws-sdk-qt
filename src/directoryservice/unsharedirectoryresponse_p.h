// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNSHAREDIRECTORYRESPONSE_P_H
#define QTAWS_UNSHAREDIRECTORYRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class UnshareDirectoryResponse;

class UnshareDirectoryResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit UnshareDirectoryResponsePrivate(UnshareDirectoryResponse * const q);

    void parseUnshareDirectoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnshareDirectoryResponse)
    Q_DISABLE_COPY(UnshareDirectoryResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
