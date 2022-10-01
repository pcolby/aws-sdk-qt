// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEAPPLICATIONFLEETREQUEST_H
#define QTAWS_ASSOCIATEAPPLICATIONFLEETREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class AssociateApplicationFleetRequestPrivate;

class QTAWSAPPSTREAM_EXPORT AssociateApplicationFleetRequest : public AppStreamRequest {

public:
    AssociateApplicationFleetRequest(const AssociateApplicationFleetRequest &other);
    AssociateApplicationFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateApplicationFleetRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
