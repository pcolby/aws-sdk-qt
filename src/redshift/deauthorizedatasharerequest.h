// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEAUTHORIZEDATASHAREREQUEST_H
#define QTAWS_DEAUTHORIZEDATASHAREREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DeauthorizeDataShareRequestPrivate;

class QTAWSREDSHIFT_EXPORT DeauthorizeDataShareRequest : public RedshiftRequest {

public:
    DeauthorizeDataShareRequest(const DeauthorizeDataShareRequest &other);
    DeauthorizeDataShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeauthorizeDataShareRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
