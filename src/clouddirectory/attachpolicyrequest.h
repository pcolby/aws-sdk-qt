// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHPOLICYREQUEST_H
#define QTAWS_ATTACHPOLICYREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class AttachPolicyRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT AttachPolicyRequest : public CloudDirectoryRequest {

public:
    AttachPolicyRequest(const AttachPolicyRequest &other);
    AttachPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachPolicyRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
