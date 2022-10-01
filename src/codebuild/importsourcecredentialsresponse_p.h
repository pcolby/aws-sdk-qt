// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSOURCECREDENTIALSRESPONSE_P_H
#define QTAWS_IMPORTSOURCECREDENTIALSRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class ImportSourceCredentialsResponse;

class ImportSourceCredentialsResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit ImportSourceCredentialsResponsePrivate(ImportSourceCredentialsResponse * const q);

    void parseImportSourceCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportSourceCredentialsResponse)
    Q_DISABLE_COPY(ImportSourceCredentialsResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
