// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERWORKFLOWTYPEREQUEST_H
#define QTAWS_REGISTERWORKFLOWTYPEREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class RegisterWorkflowTypeRequestPrivate;

class QTAWSSWF_EXPORT RegisterWorkflowTypeRequest : public SwfRequest {

public:
    RegisterWorkflowTypeRequest(const RegisterWorkflowTypeRequest &other);
    RegisterWorkflowTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterWorkflowTypeRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
