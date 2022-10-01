// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDIRECTORYRESPONSE_P_H
#define QTAWS_DELETEDIRECTORYRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class DeleteDirectoryResponse;

class DeleteDirectoryResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit DeleteDirectoryResponsePrivate(DeleteDirectoryResponse * const q);

    void parseDeleteDirectoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDirectoryResponse)
    Q_DISABLE_COPY(DeleteDirectoryResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
