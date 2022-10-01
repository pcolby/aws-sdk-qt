// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTOBJECTREQUEST_P_H
#define QTAWS_PUTOBJECTREQUEST_P_H

#include "mediastoredatarequest_p.h"
#include "putobjectrequest.h"

namespace QtAws {
namespace MediaStoreData {

class PutObjectRequest;

class PutObjectRequestPrivate : public MediaStoreDataRequestPrivate {

public:
    PutObjectRequestPrivate(const MediaStoreDataRequest::Action action,
                                   PutObjectRequest * const q);
    PutObjectRequestPrivate(const PutObjectRequestPrivate &other,
                                   PutObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutObjectRequest)

};

} // namespace MediaStoreData
} // namespace QtAws

#endif
