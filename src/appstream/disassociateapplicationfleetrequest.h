// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEAPPLICATIONFLEETREQUEST_H
#define QTAWS_DISASSOCIATEAPPLICATIONFLEETREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class DisassociateApplicationFleetRequestPrivate;

class QTAWSAPPSTREAM_EXPORT DisassociateApplicationFleetRequest : public AppStreamRequest {

public:
    DisassociateApplicationFleetRequest(const DisassociateApplicationFleetRequest &other);
    DisassociateApplicationFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateApplicationFleetRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
