// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLELOGGINGREQUEST_H
#define QTAWS_DISABLELOGGINGREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DisableLoggingRequestPrivate;

class QTAWSREDSHIFT_EXPORT DisableLoggingRequest : public RedshiftRequest {

public:
    DisableLoggingRequest(const DisableLoggingRequest &other);
    DisableLoggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableLoggingRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
