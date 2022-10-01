// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPORTSRESPONSE_P_H
#define QTAWS_LISTREPORTSRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class ListReportsResponse;

class ListReportsResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit ListReportsResponsePrivate(ListReportsResponse * const q);

    void parseListReportsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReportsResponse)
    Q_DISABLE_COPY(ListReportsResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
