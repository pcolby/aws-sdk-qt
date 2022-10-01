// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHAREDPROJECTSREQUEST_H
#define QTAWS_LISTSHAREDPROJECTSREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListSharedProjectsRequestPrivate;

class QTAWSCODEBUILD_EXPORT ListSharedProjectsRequest : public CodeBuildRequest {

public:
    ListSharedProjectsRequest(const ListSharedProjectsRequest &other);
    ListSharedProjectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSharedProjectsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
