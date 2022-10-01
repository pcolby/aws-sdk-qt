// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOBJECTREQUEST_H
#define QTAWS_DELETEOBJECTREQUEST_H

#include "mediastoredatarequest.h"

namespace QtAws {
namespace MediaStoreData {

class DeleteObjectRequestPrivate;

class QTAWSMEDIASTOREDATA_EXPORT DeleteObjectRequest : public MediaStoreDataRequest {

public:
    DeleteObjectRequest(const DeleteObjectRequest &other);
    DeleteObjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteObjectRequest)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
