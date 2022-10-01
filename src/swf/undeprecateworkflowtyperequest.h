// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNDEPRECATEWORKFLOWTYPEREQUEST_H
#define QTAWS_UNDEPRECATEWORKFLOWTYPEREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class UndeprecateWorkflowTypeRequestPrivate;

class QTAWSSWF_EXPORT UndeprecateWorkflowTypeRequest : public SwfRequest {

public:
    UndeprecateWorkflowTypeRequest(const UndeprecateWorkflowTypeRequest &other);
    UndeprecateWorkflowTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UndeprecateWorkflowTypeRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
