// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTREAMREQUEST_H
#define QTAWS_STOPSTREAMREQUEST_H

#include "ivsrequest.h"

namespace QtAws {
namespace Ivs {

class StopStreamRequestPrivate;

class QTAWSIVS_EXPORT StopStreamRequest : public IvsRequest {

public:
    StopStreamRequest(const StopStreamRequest &other);
    StopStreamRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopStreamRequest)

};

} // namespace Ivs
} // namespace QtAws

#endif
