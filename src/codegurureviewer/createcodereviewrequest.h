// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECODEREVIEWREQUEST_H
#define QTAWS_CREATECODEREVIEWREQUEST_H

#include "codegurureviewerrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class CreateCodeReviewRequestPrivate;

class QTAWSCODEGURUREVIEWER_EXPORT CreateCodeReviewRequest : public CodeGuruReviewerRequest {

public:
    CreateCodeReviewRequest(const CreateCodeReviewRequest &other);
    CreateCodeReviewRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCodeReviewRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
