// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPSREQUEST_H
#define QTAWS_LISTAPPSREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class ListAppsRequestPrivate;

class QTAWSSAGEMAKER_EXPORT ListAppsRequest : public SageMakerRequest {

public:
    ListAppsRequest(const ListAppsRequest &other);
    ListAppsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAppsRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
