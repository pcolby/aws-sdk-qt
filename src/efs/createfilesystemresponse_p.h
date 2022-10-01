// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFILESYSTEMRESPONSE_P_H
#define QTAWS_CREATEFILESYSTEMRESPONSE_P_H

#include "efsresponse_p.h"

namespace QtAws {
namespace Efs {

class CreateFileSystemResponse;

class CreateFileSystemResponsePrivate : public EfsResponsePrivate {

public:

    explicit CreateFileSystemResponsePrivate(CreateFileSystemResponse * const q);

    void parseCreateFileSystemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFileSystemResponse)
    Q_DISABLE_COPY(CreateFileSystemResponsePrivate)

};

} // namespace Efs
} // namespace QtAws

#endif
