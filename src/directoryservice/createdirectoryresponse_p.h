// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDIRECTORYRESPONSE_P_H
#define QTAWS_CREATEDIRECTORYRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class CreateDirectoryResponse;

class CreateDirectoryResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit CreateDirectoryResponsePrivate(CreateDirectoryResponse * const q);

    void parseCreateDirectoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDirectoryResponse)
    Q_DISABLE_COPY(CreateDirectoryResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
