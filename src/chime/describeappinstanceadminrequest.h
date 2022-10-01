// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPINSTANCEADMINREQUEST_H
#define QTAWS_DESCRIBEAPPINSTANCEADMINREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DescribeAppInstanceAdminRequestPrivate;

class QTAWSCHIME_EXPORT DescribeAppInstanceAdminRequest : public ChimeRequest {

public:
    DescribeAppInstanceAdminRequest(const DescribeAppInstanceAdminRequest &other);
    DescribeAppInstanceAdminRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAppInstanceAdminRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
