// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSFORPROJECTREQUEST_H
#define QTAWS_LISTTAGSFORPROJECTREQUEST_H

#include "codestarrequest.h"

namespace QtAws {
namespace CodeStar {

class ListTagsForProjectRequestPrivate;

class QTAWSCODESTAR_EXPORT ListTagsForProjectRequest : public CodeStarRequest {

public:
    ListTagsForProjectRequest(const ListTagsForProjectRequest &other);
    ListTagsForProjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTagsForProjectRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
