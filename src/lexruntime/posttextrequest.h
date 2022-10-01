// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_POSTTEXTREQUEST_H
#define QTAWS_POSTTEXTREQUEST_H

#include "lexruntimerequest.h"

namespace QtAws {
namespace LexRuntime {

class PostTextRequestPrivate;

class QTAWSLEXRUNTIME_EXPORT PostTextRequest : public LexRuntimeRequest {

public:
    PostTextRequest(const PostTextRequest &other);
    PostTextRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PostTextRequest)

};

} // namespace LexRuntime
} // namespace QtAws

#endif
