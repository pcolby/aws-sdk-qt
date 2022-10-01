// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCORSPOLICYREQUEST_H
#define QTAWS_PUTCORSPOLICYREQUEST_H

#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class PutCorsPolicyRequestPrivate;

class QTAWSMEDIASTORE_EXPORT PutCorsPolicyRequest : public MediaStoreRequest {

public:
    PutCorsPolicyRequest(const PutCorsPolicyRequest &other);
    PutCorsPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutCorsPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
