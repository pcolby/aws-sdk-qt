// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVITYTYPEREQUEST_H
#define QTAWS_DESCRIBEACTIVITYTYPEREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class DescribeActivityTypeRequestPrivate;

class QTAWSSWF_EXPORT DescribeActivityTypeRequest : public SwfRequest {

public:
    DescribeActivityTypeRequest(const DescribeActivityTypeRequest &other);
    DescribeActivityTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeActivityTypeRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
