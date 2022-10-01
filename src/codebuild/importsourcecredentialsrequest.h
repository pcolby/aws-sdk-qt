// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTSOURCECREDENTIALSREQUEST_H
#define QTAWS_IMPORTSOURCECREDENTIALSREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class ImportSourceCredentialsRequestPrivate;

class QTAWSCODEBUILD_EXPORT ImportSourceCredentialsRequest : public CodeBuildRequest {

public:
    ImportSourceCredentialsRequest(const ImportSourceCredentialsRequest &other);
    ImportSourceCredentialsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportSourceCredentialsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
