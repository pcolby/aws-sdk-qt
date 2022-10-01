// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGPROJECTREQUEST_H
#define QTAWS_UNTAGPROJECTREQUEST_H

#include "codestarrequest.h"

namespace QtAws {
namespace CodeStar {

class UntagProjectRequestPrivate;

class QTAWSCODESTAR_EXPORT UntagProjectRequest : public CodeStarRequest {

public:
    UntagProjectRequest(const UntagProjectRequest &other);
    UntagProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagProjectRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
