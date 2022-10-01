// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFILESYSTEMRESPONSE_P_H
#define QTAWS_UPDATEFILESYSTEMRESPONSE_P_H

#include "fsxresponse_p.h"

namespace QtAws {
namespace FSx {

class UpdateFileSystemResponse;

class UpdateFileSystemResponsePrivate : public FSxResponsePrivate {

public:

    explicit UpdateFileSystemResponsePrivate(UpdateFileSystemResponse * const q);

    void parseUpdateFileSystemResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFileSystemResponse)
    Q_DISABLE_COPY(UpdateFileSystemResponsePrivate)

};

} // namespace FSx
} // namespace QtAws

#endif
