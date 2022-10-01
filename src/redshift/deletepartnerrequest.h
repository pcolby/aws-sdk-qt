// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTNERREQUEST_H
#define QTAWS_DELETEPARTNERREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DeletePartnerRequestPrivate;

class QTAWSREDSHIFT_EXPORT DeletePartnerRequest : public RedshiftRequest {

public:
    DeletePartnerRequest(const DeletePartnerRequest &other);
    DeletePartnerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePartnerRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
