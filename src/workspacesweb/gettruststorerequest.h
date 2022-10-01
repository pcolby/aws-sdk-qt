// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRUSTSTOREREQUEST_H
#define QTAWS_GETTRUSTSTOREREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetTrustStoreRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT GetTrustStoreRequest : public WorkSpacesWebRequest {

public:
    GetTrustStoreRequest(const GetTrustStoreRequest &other);
    GetTrustStoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTrustStoreRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
