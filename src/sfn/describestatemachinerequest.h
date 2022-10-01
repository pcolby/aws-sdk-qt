// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTATEMACHINEREQUEST_H
#define QTAWS_DESCRIBESTATEMACHINEREQUEST_H

#include "sfnrequest.h"

namespace QtAws {
namespace Sfn {

class DescribeStateMachineRequestPrivate;

class QTAWSSFN_EXPORT DescribeStateMachineRequest : public SfnRequest {

public:
    DescribeStateMachineRequest(const DescribeStateMachineRequest &other);
    DescribeStateMachineRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeStateMachineRequest)

};

} // namespace Sfn
} // namespace QtAws

#endif
