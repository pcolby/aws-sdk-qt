// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRUSTSTOREREQUEST_H
#define QTAWS_CREATETRUSTSTOREREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateTrustStoreRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT CreateTrustStoreRequest : public WorkSpacesWebRequest {

public:
    CreateTrustStoreRequest(const CreateTrustStoreRequest &other);
    CreateTrustStoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrustStoreRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
