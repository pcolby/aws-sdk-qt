// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCORSPOLICYREQUEST_P_H
#define QTAWS_PUTCORSPOLICYREQUEST_P_H

#include "mediastorerequest_p.h"
#include "putcorspolicyrequest.h"

namespace QtAws {
namespace MediaStore {

class PutCorsPolicyRequest;

class PutCorsPolicyRequestPrivate : public MediaStoreRequestPrivate {

public:
    PutCorsPolicyRequestPrivate(const MediaStoreRequest::Action action,
                                   PutCorsPolicyRequest * const q);
    PutCorsPolicyRequestPrivate(const PutCorsPolicyRequestPrivate &other,
                                   PutCorsPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutCorsPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
