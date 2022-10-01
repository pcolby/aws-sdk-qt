// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEFLEETREQUEST_H
#define QTAWS_DISASSOCIATEFLEETREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DisassociateFleetRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DisassociateFleetRequest : public AppStreamRequest {

public:
    DisassociateFleetRequest(const DisassociateFleetRequest &other);
    DisassociateFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateFleetRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
