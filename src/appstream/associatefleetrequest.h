// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEFLEETREQUEST_H
#define QTAWS_ASSOCIATEFLEETREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class AssociateFleetRequestPrivate;

class QTAWSAPPSTREAM_EXPORT AssociateFleetRequest : public AppStreamRequest {

public:
    AssociateFleetRequest(const AssociateFleetRequest &other);
    AssociateFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateFleetRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
