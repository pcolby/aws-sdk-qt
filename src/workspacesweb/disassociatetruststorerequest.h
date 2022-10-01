// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATETRUSTSTOREREQUEST_H
#define QTAWS_DISASSOCIATETRUSTSTOREREQUEST_H

#include "workspaceswebrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DisassociateTrustStoreRequestPrivate;

class QTAWSWORKSPACESWEB_EXPORT DisassociateTrustStoreRequest : public WorkSpacesWebRequest {

public:
    DisassociateTrustStoreRequest(const DisassociateTrustStoreRequest &other);
    DisassociateTrustStoreRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateTrustStoreRequest)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
