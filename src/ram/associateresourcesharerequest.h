// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATERESOURCESHAREREQUEST_H
#define QTAWS_ASSOCIATERESOURCESHAREREQUEST_H

#include "ramrequest.h"

namespace QtAws {
namespace Ram {

class AssociateResourceShareRequestPrivate;

class QTAWSRAM_EXPORT AssociateResourceShareRequest : public RamRequest {

public:
    AssociateResourceShareRequest(const AssociateResourceShareRequest &other);
    AssociateResourceShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateResourceShareRequest)

};

} // namespace Ram
} // namespace QtAws

#endif
