// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELRESIZEREQUEST_H
#define QTAWS_CANCELRESIZEREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class CancelResizeRequestPrivate;

class QTAWSREDSHIFT_EXPORT CancelResizeRequest : public RedshiftRequest {

public:
    CancelResizeRequest(const CancelResizeRequest &other);
    CancelResizeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelResizeRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
