// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOMMENTREQUEST_H
#define QTAWS_CREATECOMMENTREQUEST_H

#include "workdocsrequest.h"

namespace QtAws {
namespace WorkDocs {

class CreateCommentRequestPrivate;

class QTAWSWORKDOCS_EXPORT CreateCommentRequest : public WorkDocsRequest {

public:
    CreateCommentRequest(const CreateCommentRequest &other);
    CreateCommentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCommentRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
