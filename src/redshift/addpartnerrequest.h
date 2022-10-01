// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPARTNERREQUEST_H
#define QTAWS_ADDPARTNERREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class AddPartnerRequestPrivate;

class QTAWSREDSHIFT_EXPORT AddPartnerRequest : public RedshiftRequest {

public:
    AddPartnerRequest(const AddPartnerRequest &other);
    AddPartnerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AddPartnerRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
