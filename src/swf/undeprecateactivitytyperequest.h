// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNDEPRECATEACTIVITYTYPEREQUEST_H
#define QTAWS_UNDEPRECATEACTIVITYTYPEREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class UndeprecateActivityTypeRequestPrivate;

class QTAWSSWF_EXPORT UndeprecateActivityTypeRequest : public SwfRequest {

public:
    UndeprecateActivityTypeRequest(const UndeprecateActivityTypeRequest &other);
    UndeprecateActivityTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UndeprecateActivityTypeRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
