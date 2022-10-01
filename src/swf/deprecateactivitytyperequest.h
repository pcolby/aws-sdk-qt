// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATEACTIVITYTYPEREQUEST_H
#define QTAWS_DEPRECATEACTIVITYTYPEREQUEST_H

#include "swfrequest.h"

namespace QtAws {
namespace Swf {

class DeprecateActivityTypeRequestPrivate;

class QTAWSSWF_EXPORT DeprecateActivityTypeRequest : public SwfRequest {

public:
    DeprecateActivityTypeRequest(const DeprecateActivityTypeRequest &other);
    DeprecateActivityTypeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeprecateActivityTypeRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
