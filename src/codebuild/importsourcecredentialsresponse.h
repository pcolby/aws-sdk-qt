// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSOURCECREDENTIALSRESPONSE_H
#define QTAWS_IMPORTSOURCECREDENTIALSRESPONSE_H

#include "codebuildresponse.h"
#include "importsourcecredentialsrequest.h"

namespace QtAws {
namespace CodeBuild {

class ImportSourceCredentialsResponsePrivate;

class QTAWSCODEBUILD_EXPORT ImportSourceCredentialsResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    ImportSourceCredentialsResponse(const ImportSourceCredentialsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportSourceCredentialsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportSourceCredentialsResponse)
    Q_DISABLE_COPY(ImportSourceCredentialsResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
