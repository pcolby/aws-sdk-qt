// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILESYSTEMRESPONSE_P_H
#define QTAWS_CREATEFILESYSTEMRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class CreateFileSystemResponse;

class CreateFileSystemResponsePrivate : public FSxResponsePrivate {

public:

    explicit CreateFileSystemResponsePrivate(CreateFileSystemResponse * const q);

    void parseCreateFileSystemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFileSystemResponse)
    Q_DISABLE_COPY(CreateFileSystemResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
