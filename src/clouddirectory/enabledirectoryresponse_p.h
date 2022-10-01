// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEDIRECTORYRESPONSE_P_H
#define QTAWS_ENABLEDIRECTORYRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class EnableDirectoryResponse;

class EnableDirectoryResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit EnableDirectoryResponsePrivate(EnableDirectoryResponse * const q);

    void parseEnableDirectoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableDirectoryResponse)
    Q_DISABLE_COPY(EnableDirectoryResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
