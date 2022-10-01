// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPFLEETREQUEST_H
#define QTAWS_STOPFLEETREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class StopFleetRequestPrivate;

class QTAWSAPPSTREAM_EXPORT StopFleetRequest : public AppStreamRequest {

public:
    StopFleetRequest(const StopFleetRequest &other);
    StopFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopFleetRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
