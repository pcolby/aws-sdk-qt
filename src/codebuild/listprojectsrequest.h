// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTSREQUEST_H
#define QTAWS_LISTPROJECTSREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListProjectsRequestPrivate;

class QTAWSCODEBUILD_EXPORT ListProjectsRequest : public CodeBuildRequest {

public:
    ListProjectsRequest(const ListProjectsRequest &other);
    ListProjectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProjectsRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
