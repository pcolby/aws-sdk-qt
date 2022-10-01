// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROJECTSREQUEST_H
#define QTAWS_LISTPROJECTSREQUEST_H

#include "mobilerequest.h"

namespace QtAws {
namespace Mobile {

class ListProjectsRequestPrivate;

class QTAWSMOBILE_EXPORT ListProjectsRequest : public MobileRequest {

public:
    ListProjectsRequest(const ListProjectsRequest &other);
    ListProjectsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProjectsRequest)

};

} // namespace Mobile
} // namespace QtAws

#endif
