// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTORYRESPONSE_P_H
#define QTAWS_DELETEDIRECTORYRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DeleteDirectoryResponse;

class DeleteDirectoryResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DeleteDirectoryResponsePrivate(DeleteDirectoryResponse * const q);

    void parseDeleteDirectoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDirectoryResponse)
    Q_DISABLE_COPY(DeleteDirectoryResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
