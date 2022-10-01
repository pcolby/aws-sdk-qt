// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKFLOWTYPEREQUEST_H
#define QTAWS_DESCRIBEWORKFLOWTYPEREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class DescribeWorkflowTypeRequestPrivate;

class QTAWSSWF_EXPORT DescribeWorkflowTypeRequest : public SwfRequest {

public:
    DescribeWorkflowTypeRequest(const DescribeWorkflowTypeRequest &other);
    DescribeWorkflowTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkflowTypeRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
