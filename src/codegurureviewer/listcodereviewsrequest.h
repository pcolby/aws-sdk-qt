// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCODEREVIEWSREQUEST_H
#define QTAWS_LISTCODEREVIEWSREQUEST_H

#include "codegurureviewerrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class ListCodeReviewsRequestPrivate;

class QTAWSCODEGURUREVIEWER_EXPORT ListCodeReviewsRequest : public CodeGuruReviewerRequest {

public:
    ListCodeReviewsRequest(const ListCodeReviewsRequest &other);
    ListCodeReviewsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListCodeReviewsRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
