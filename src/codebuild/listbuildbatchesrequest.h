// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDBATCHESREQUEST_H
#define QTAWS_LISTBUILDBATCHESREQUEST_H

#include "codebuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class ListBuildBatchesRequestPrivate;

class QTAWSCODEBUILD_EXPORT ListBuildBatchesRequest : public CodeBuildRequest {

public:
    ListBuildBatchesRequest(const ListBuildBatchesRequest &other);
    ListBuildBatchesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListBuildBatchesRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
