// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOBJECTRESPONSE_P_H
#define QTAWS_CREATEOBJECTRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class CreateObjectResponse;

class CreateObjectResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit CreateObjectResponsePrivate(CreateObjectResponse * const q);

    void parseCreateObjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateObjectResponse)
    Q_DISABLE_COPY(CreateObjectResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
