// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEENTITYRECOGNIZERREQUEST_H
#define QTAWS_CREATEENTITYRECOGNIZERREQUEST_H

#include "comprehendrequest.h"

namespace QtAws {
namespace Comprehend {

class CreateEntityRecognizerRequestPrivate;

class QTAWSCOMPREHEND_EXPORT CreateEntityRecognizerRequest : public ComprehendRequest {

public:
    CreateEntityRecognizerRequest(const CreateEntityRecognizerRequest &other);
    CreateEntityRecognizerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEntityRecognizerRequest)

};

} // namespace Comprehend
} // namespace QtAws

#endif
