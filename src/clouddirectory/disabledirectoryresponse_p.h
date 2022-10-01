// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEDIRECTORYRESPONSE_P_H
#define QTAWS_DISABLEDIRECTORYRESPONSE_P_H

#include "clouddirectoryresponse_p.h"

namespace QtAws {
namespace CloudDirectory {

class DisableDirectoryResponse;

class DisableDirectoryResponsePrivate : public CloudDirectoryResponsePrivate {

public:

    explicit DisableDirectoryResponsePrivate(DisableDirectoryResponse * const q);

    void parseDisableDirectoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableDirectoryResponse)
    Q_DISABLE_COPY(DisableDirectoryResponsePrivate)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
