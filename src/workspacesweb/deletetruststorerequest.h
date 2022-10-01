// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETRUSTSTOREREQUEST_H
#define QTAWS_DELETETRUSTSTOREREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteTrustStoreRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT DeleteTrustStoreRequest : public WorkSpacesWebRequest {

public:
    DeleteTrustStoreRequest(const DeleteTrustStoreRequest &other);
    DeleteTrustStoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTrustStoreRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
