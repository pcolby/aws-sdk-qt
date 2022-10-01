// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBACKUPPOLICYREQUEST_H
#define QTAWS_DESCRIBEBACKUPPOLICYREQUEST_H

#include "efsrequest.h"

namespace QtAws {
namespace Efs {

class DescribeBackupPolicyRequestPrivate;

class QTAWSEFS_EXPORT DescribeBackupPolicyRequest : public EfsRequest {

public:
    DescribeBackupPolicyRequest(const DescribeBackupPolicyRequest &other);
    DescribeBackupPolicyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBackupPolicyRequest)

};

} // namespace Efs
} // namespace QtAws

#endif
