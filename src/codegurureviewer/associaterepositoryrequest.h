// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEREPOSITORYREQUEST_H
#define QTAWS_ASSOCIATEREPOSITORYREQUEST_H

#include "codegurureviewerrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class AssociateRepositoryRequestPrivate;

class QTAWSCODEGURUREVIEWER_EXPORT AssociateRepositoryRequest : public CodeGuruReviewerRequest {

public:
    AssociateRepositoryRequest(const AssociateRepositoryRequest &other);
    AssociateRepositoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateRepositoryRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
