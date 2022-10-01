// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETREQUEST_H
#define QTAWS_UPDATEFLEETREQUEST_H

#include "appstreamrequest.h"

namespace QtAws {
namespace AppStream {

class UpdateFleetRequestPrivate;

class QTAWSAPPSTREAM_EXPORT UpdateFleetRequest : public AppStreamRequest {

public:
    UpdateFleetRequest(const UpdateFleetRequest &other);
    UpdateFleetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateFleetRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
