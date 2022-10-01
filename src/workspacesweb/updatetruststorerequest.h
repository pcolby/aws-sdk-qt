// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETRUSTSTOREREQUEST_H
#define QTAWS_UPDATETRUSTSTOREREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateTrustStoreRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT UpdateTrustStoreRequest : public WorkSpacesWebRequest {

public:
    UpdateTrustStoreRequest(const UpdateTrustStoreRequest &other);
    UpdateTrustStoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateTrustStoreRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
