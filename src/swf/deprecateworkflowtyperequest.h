// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATEWORKFLOWTYPEREQUEST_H
#define QTAWS_DEPRECATEWORKFLOWTYPEREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class DeprecateWorkflowTypeRequestPrivate;

class QTAWSSWF_EXPORT DeprecateWorkflowTypeRequest : public SwfRequest {

public:
    DeprecateWorkflowTypeRequest(const DeprecateWorkflowTypeRequest &other);
    DeprecateWorkflowTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprecateWorkflowTypeRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
