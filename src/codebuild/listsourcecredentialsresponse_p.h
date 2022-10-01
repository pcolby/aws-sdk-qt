// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOURCECREDENTIALSRESPONSE_P_H
#define QTAWS_LISTSOURCECREDENTIALSRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class ListSourceCredentialsResponse;

class ListSourceCredentialsResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit ListSourceCredentialsResponsePrivate(ListSourceCredentialsResponse * const q);

    void parseListSourceCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSourceCredentialsResponse)
    Q_DISABLE_COPY(ListSourceCredentialsResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
