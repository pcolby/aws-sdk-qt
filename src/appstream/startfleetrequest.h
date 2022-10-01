// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTFLEETREQUEST_H
#define QTAWS_STARTFLEETREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class StartFleetRequestPrivate;

class QTAWSAPPSTREAM_EXPORT StartFleetRequest : public AppStreamRequest {

public:
    StartFleetRequest(const StartFleetRequest &other);
    StartFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartFleetRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
