// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPACKAGESREQUEST_H
#define QTAWS_LISTPACKAGESREQUEST_H

#include "codeartifactrequest.h"

namespace QtAws {
namespace CodeArtifact {

class ListPackagesRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT ListPackagesRequest : public CodeArtifactRequest {

public:
    ListPackagesRequest(const ListPackagesRequest &other);
    ListPackagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPackagesRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
