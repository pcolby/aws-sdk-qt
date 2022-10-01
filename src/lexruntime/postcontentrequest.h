// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTCONTENTREQUEST_H
#define QTAWS_POSTCONTENTREQUEST_H

#include "lexruntimerequest.h"

namespace QtAws {
namespace LexRuntime {

class PostContentRequestPrivate;

class QTAWSLEXRUNTIME_EXPORT PostContentRequest : public LexRuntimeRequest {

public:
    PostContentRequest(const PostContentRequest &other);
    PostContentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PostContentRequest)

};

} // namespace LexRuntime
} // namespace QtAws

#endif
