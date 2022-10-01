// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPOSITORYASSOCIATIONSREQUEST_H
#define QTAWS_LISTREPOSITORYASSOCIATIONSREQUEST_H

#include "codegurureviewerrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class ListRepositoryAssociationsRequestPrivate;

class QTAWSCODEGURUREVIEWER_EXPORT ListRepositoryAssociationsRequest : public CodeGuruReviewerRequest {

public:
    ListRepositoryAssociationsRequest(const ListRepositoryAssociationsRequest &other);
    ListRepositoryAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListRepositoryAssociationsRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
