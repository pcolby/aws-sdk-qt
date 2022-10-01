// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECORSPOLICYREQUEST_H
#define QTAWS_DELETECORSPOLICYREQUEST_H

#include "mediastorerequest.h"

namespace QtAws {
namespace MediaStore {

class DeleteCorsPolicyRequestPrivate;

class QTAWSMEDIASTORE_EXPORT DeleteCorsPolicyRequest : public MediaStoreRequest {

public:
    DeleteCorsPolicyRequest(const DeleteCorsPolicyRequest &other);
    DeleteCorsPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCorsPolicyRequest)

};

} // namespace MediaStore
} // namespace QtAws

#endif
