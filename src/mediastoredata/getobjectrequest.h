// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETOBJECTREQUEST_H
#define QTAWS_GETOBJECTREQUEST_H

#include "mediastoredatarequest.h"

namespace QtAws {
namespace MediaStoreData {

class GetObjectRequestPrivate;

class QTAWSMEDIASTOREDATA_EXPORT GetObjectRequest : public MediaStoreDataRequest {

public:
    GetObjectRequest(const GetObjectRequest &other);
    GetObjectRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetObjectRequest)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
