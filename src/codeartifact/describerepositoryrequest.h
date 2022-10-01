// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPOSITORYREQUEST_H
#define QTAWS_DESCRIBEREPOSITORYREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class DescribeRepositoryRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT DescribeRepositoryRequest : public CodeArtifactRequest {

public:
    DescribeRepositoryRequest(const DescribeRepositoryRequest &other);
    DescribeRepositoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeRepositoryRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
