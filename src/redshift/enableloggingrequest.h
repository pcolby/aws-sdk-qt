// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLELOGGINGREQUEST_H
#define QTAWS_ENABLELOGGINGREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class EnableLoggingRequestPrivate;

class QTAWSREDSHIFT_EXPORT EnableLoggingRequest : public RedshiftRequest {

public:
    EnableLoggingRequest(const EnableLoggingRequest &other);
    EnableLoggingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableLoggingRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
