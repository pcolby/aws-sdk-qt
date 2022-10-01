// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPOLICYATTACHMENTSREQUEST_H
#define QTAWS_LISTPOLICYATTACHMENTSREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class ListPolicyAttachmentsRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT ListPolicyAttachmentsRequest : public CloudDirectoryRequest {

public:
    ListPolicyAttachmentsRequest(const ListPolicyAttachmentsRequest &other);
    ListPolicyAttachmentsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPolicyAttachmentsRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
