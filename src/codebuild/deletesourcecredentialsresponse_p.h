// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESOURCECREDENTIALSRESPONSE_P_H
#define QTAWS_DELETESOURCECREDENTIALSRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class DeleteSourceCredentialsResponse;

class DeleteSourceCredentialsResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit DeleteSourceCredentialsResponsePrivate(DeleteSourceCredentialsResponse * const q);

    void parseDeleteSourceCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSourceCredentialsResponse)
    Q_DISABLE_COPY(DeleteSourceCredentialsResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
