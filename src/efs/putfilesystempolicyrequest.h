// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTFILESYSTEMPOLICYREQUEST_H
#define QTAWS_PUTFILESYSTEMPOLICYREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class PutFileSystemPolicyRequestPrivate;

class QTAWSEFS_EXPORT PutFileSystemPolicyRequest : public EfsRequest {

public:
    PutFileSystemPolicyRequest(const PutFileSystemPolicyRequest &other);
    PutFileSystemPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutFileSystemPolicyRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
