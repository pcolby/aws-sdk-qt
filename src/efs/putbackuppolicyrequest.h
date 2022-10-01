// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTBACKUPPOLICYREQUEST_H
#define QTAWS_PUTBACKUPPOLICYREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class PutBackupPolicyRequestPrivate;

class QTAWSEFS_EXPORT PutBackupPolicyRequest : public EfsRequest {

public:
    PutBackupPolicyRequest(const PutBackupPolicyRequest &other);
    PutBackupPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutBackupPolicyRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
