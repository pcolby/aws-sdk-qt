// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATETRUSTSTOREREQUEST_H
#define QTAWS_ASSOCIATETRUSTSTOREREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class AssociateTrustStoreRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT AssociateTrustStoreRequest : public WorkSpacesWebRequest {

public:
    AssociateTrustStoreRequest(const AssociateTrustStoreRequest &other);
    AssociateTrustStoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateTrustStoreRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
