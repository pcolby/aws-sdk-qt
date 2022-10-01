// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENTITYRECOGNIZERREQUEST_H
#define QTAWS_DELETEENTITYRECOGNIZERREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class DeleteEntityRecognizerRequestPrivate;

class QTAWSCOMPREHEND_EXPORT DeleteEntityRecognizerRequest : public ComprehendRequest {

public:
    DeleteEntityRecognizerRequest(const DeleteEntityRecognizerRequest &other);
    DeleteEntityRecognizerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEntityRecognizerRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
