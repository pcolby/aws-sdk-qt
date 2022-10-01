// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOOKUPPOLICYREQUEST_H
#define QTAWS_LOOKUPPOLICYREQUEST_H

#include "clouddirectoryrequest.h"

namespace QtAws {
namespace CloudDirectory {

class LookupPolicyRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT LookupPolicyRequest : public CloudDirectoryRequest {

public:
    LookupPolicyRequest(const LookupPolicyRequest &other);
    LookupPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LookupPolicyRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
