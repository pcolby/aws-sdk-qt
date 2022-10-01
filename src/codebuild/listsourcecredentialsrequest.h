// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSOURCECREDENTIALSREQUEST_H
#define QTAWS_LISTSOURCECREDENTIALSREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListSourceCredentialsRequestPrivate;

class QTAWSCODEBUILD_EXPORT ListSourceCredentialsRequest : public CodeBuildRequest {

public:
    ListSourceCredentialsRequest(const ListSourceCredentialsRequest &other);
    ListSourceCredentialsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSourceCredentialsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
