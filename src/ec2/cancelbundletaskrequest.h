// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELBUNDLETASKREQUEST_H
#define QTAWS_CANCELBUNDLETASKREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CancelBundleTaskRequestPrivate;

class QTAWSEC2_EXPORT CancelBundleTaskRequest : public Ec2Request {

public:
    CancelBundleTaskRequest(const CancelBundleTaskRequest &other);
    CancelBundleTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelBundleTaskRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
