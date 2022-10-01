// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDSREQUEST_H
#define QTAWS_LISTBUILDSREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListBuildsRequestPrivate;

class QTAWSCODEBUILD_EXPORT ListBuildsRequest : public CodeBuildRequest {

public:
    ListBuildsRequest(const ListBuildsRequest &other);
    ListBuildsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBuildsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
