// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTRUSTSTORESREQUEST_H
#define QTAWS_LISTTRUSTSTORESREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class ListTrustStoresRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT ListTrustStoresRequest : public WorkSpacesWebRequest {

public:
    ListTrustStoresRequest(const ListTrustStoresRequest &other);
    ListTrustStoresRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTrustStoresRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
