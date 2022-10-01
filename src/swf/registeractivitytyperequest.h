// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERACTIVITYTYPEREQUEST_H
#define QTAWS_REGISTERACTIVITYTYPEREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class RegisterActivityTypeRequestPrivate;

class QTAWSSWF_EXPORT RegisterActivityTypeRequest : public SwfRequest {

public:
    RegisterActivityTypeRequest(const RegisterActivityTypeRequest &other);
    RegisterActivityTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterActivityTypeRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
