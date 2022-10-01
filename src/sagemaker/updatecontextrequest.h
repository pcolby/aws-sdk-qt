// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONTEXTREQUEST_H
#define QTAWS_UPDATECONTEXTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class UpdateContextRequestPrivate;

class QTAWSSAGEMAKER_EXPORT UpdateContextRequest : public SageMakerRequest {

public:
    UpdateContextRequest(const UpdateContextRequest &other);
    UpdateContextRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateContextRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
