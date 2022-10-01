// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDIRECTORYRESPONSE_P_H
#define QTAWS_GETDIRECTORYRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class GetDirectoryResponse;

class GetDirectoryResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit GetDirectoryResponsePrivate(GetDirectoryResponse * const q);

    void parseGetDirectoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDirectoryResponse)
    Q_DISABLE_COPY(GetDirectoryResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
