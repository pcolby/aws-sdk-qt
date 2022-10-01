// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTAINERSREQUEST_H
#define QTAWS_LISTCONTAINERSREQUEST_H

#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class ListContainersRequestPrivate;

class QTAWSMEDIASTORE_EXPORT ListContainersRequest : public MediaStoreRequest {

public:
    ListContainersRequest(const ListContainersRequest &other);
    ListContainersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListContainersRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
