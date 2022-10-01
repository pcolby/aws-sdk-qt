// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEDATASHARECONSUMERREQUEST_H
#define QTAWS_ASSOCIATEDATASHARECONSUMERREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class AssociateDataShareConsumerRequestPrivate;

class QTAWSREDSHIFT_EXPORT AssociateDataShareConsumerRequest : public RedshiftRequest {

public:
    AssociateDataShareConsumerRequest(const AssociateDataShareConsumerRequest &other);
    AssociateDataShareConsumerRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateDataShareConsumerRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
