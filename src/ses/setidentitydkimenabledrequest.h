// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETIDENTITYDKIMENABLEDREQUEST_H
#define QTAWS_SETIDENTITYDKIMENABLEDREQUEST_H

#include "sesrequest.h"

namespace QtAws {
namespace Ses {

class SetIdentityDkimEnabledRequestPrivate;

class QTAWSSES_EXPORT SetIdentityDkimEnabledRequest : public SesRequest {

public:
    SetIdentityDkimEnabledRequest(const SetIdentityDkimEnabledRequest &other);
    SetIdentityDkimEnabledRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetIdentityDkimEnabledRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
